#ifndef RESOURCES_H
#define RESOURCES_H

#include <memory>
#include <unordered_map>

#include <SFML/Graphics.hpp>

#include "config.hpp"
#include "tile_config.hpp"

namespace ld {
const std::vector<ld::TileConfig> TILES = {
    TileConfig("grass_1.png", ld::TileType::Grass), // 0
    TileConfig("grass_2.png", ld::TileType::Grass), // 1

    TileConfig("earth_1.png", ld::TileType::Earth), // 2
    TileConfig("earth_2.png", ld::TileType::Earth), // 3

    TileConfig("water_1.png", ld::TileType::Water), // 4
    TileConfig("water_2.png", ld::TileType::Water), // 5

    //TileConfig("light_water_1.png"), // 6
    //TileConfig("light_water_2.png"), // 7

   // TileConfig("light_earth_1.png"), TileConfig("light_earth_2.png"),

    //TileConfig("purple_1.png"),      TileConfig("purple_2.png"),
};

const std::vector<std::string> files = {
    // Units
    "skeleton_warrior_right.png",
    "skeleton_armored_right.png",
    "skeleton_special_right.png",

    "knight_warrior_right.png",
    "knight_armored_right.png",
    "knight_special_right.png",

    // UI
    "button_brown.png",
    "button_brown_pressed.png",
    "crosshair.png",

    // Resources
    "gold.png",
    "stone_1.png",
    "stone_2.png",
    "stone_3.png",
    "stone_4.png",
    "timber.png",
    "tree_1.png",
    "tree_2.png",
};


class Resources {

public:
  void load();
  const sf::Texture &get_texture(const std::string &filename) const;

  sf::Font basic_font_;

private:
  std::unordered_map<std::string, std::unique_ptr<sf::Texture>> textures;
};
} // namespace ld

#endif /* RESOURCES_H */