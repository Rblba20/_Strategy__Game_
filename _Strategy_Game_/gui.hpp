#ifndef GUI_H
#define GUI_H

#include <memory>

#include <SFML/Graphics.hpp>

#include "resources.hpp"
#include "player.hpp"

namespace ld {

    enum class GuiAction {
    NoAction,
    EndTurn,
    AddWarriorUnit,
    AddArmoredUnit,
    AddSpecialUnit,
};

class Button {
  public:
    Button(const std::shared_ptr<ld::Resources> &resources,
           const std::string &resource_name, bool enabled);

    void render(sf::RenderWindow &window) const;

    void set_text(const std::string &text);

    bool check_click(const sf::Vector2i &pos) const;

    bool enabled_;
    bool visible_;

    const std::shared_ptr<ld::Resources> resources_;

    sf::Sprite sprite_;
    sf::Text label_;
};

class Gui {
  public:
    Gui(const std::shared_ptr<ld::Resources> &resources);
    void render(sf::RenderWindow &window) const;
    void update(std::shared_ptr<ld::Player> player_1,
                std::shared_ptr<ld::Player> player_2, bool human_active);
    
    ld::GuiAction handle_button_click(const sf::Vector2i &pos);

    const std::shared_ptr<ld::Resources> resources_;
    ld::Button panel_turn;
    ld::Button panel_tiles;
    ld::Button panel_coins;
    ld::Button button_turn;

    ld::Button button_warrior;
    ld::Button button_armored;
    ld::Button button_special;

  private:
    void set_positions();
};
} // namespace ld

#endif /* GUI_H */