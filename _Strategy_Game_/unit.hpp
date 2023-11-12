#ifndef UNIT_H
#define UNIT_H

#include <memory>

#include <SFML/Graphics.hpp>

#include "resources.hpp"6
#include "config.hpp"

namespace ld {

enum class UnitType {
    Armored,
};

//enum class UnitFaction {
//    Skeleton,
//};

class Unit {
  public:
    Unit(const sf::Texture &texture, ld::Faction unit_faction,
         ld::UnitType unit_type);

    void render(sf::RenderWindow &window) const;

    void set_strength(int strength);
    void update_strength(int strength_diff);
    int get_strength() const;

    ld::UnitType get_type() const;
    ld::Faction get_faction() const;

    bool can_fight(const std::shared_ptr<ld::Unit> &other_unit) const;

    void fight(std::shared_ptr<ld::Unit> &unit);

    sf::Sprite sprite;
    bool selected_;
    bool already_moved_;

    static std::shared_ptr<ld::Unit> build_unit(const ld::Resources &resources,
                                                ld::Faction faction,
                                                ld::UnitType unit_type);

  private:
    const ld::UnitType unit_type_;
    const ld::Faction unit_faction_;

    int strength_;

};
} // namespace ld

#endif /* UNIT_H */