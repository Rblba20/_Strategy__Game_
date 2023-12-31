#ifndef GameResource_H
#define GameResource_H

#include <memory>

#include <SFML/Graphics.hpp>

#include "config.hpp"
#include "resources.hpp"

namespace ld {

enum class GameResourceType {
    Gold,
    Timber,
    Tree_1,
    Tree_2,
    Stone_1,
    Stone_2,
    Stone_3,
    Stone_4,
};

class GameResource {
  public:
    GameResource(const sf::Texture &texture,
                 ld::GameResourceType game_resource_type);

    void render(sf::RenderWindow &window) const;

    int get_resource_payout() const;
    const std::string get_string() const;

    sf::Sprite sprite_;

    static std::shared_ptr<ld::GameResource>
    build(const ld::Resources &resources,
          ld::GameResourceType game_resource_type, const std::string &filename);

  private:
    const ld::GameResourceType game_resource_type_;
};
} // namespace ld

#endif /* UNIT_H */