#ifndef TILE_H
#define TILE_H

#include "unit.hpp"
#include "config.hpp"
#include <SFML/Graphics.hpp>

namespace ld {
class Tile {
  public:
    Tile(const sf::Texture &texture, const unsigned row, const unsigned col);
    Tile(const sf::Texture &texture, ld::TileType type, int, int);

    sf::Sprite sprite;

    std::shared_ptr<ld::Unit> unit_;

    int row_, col_;
    
    const ld::TileType type_;

  private:
};
} // namespace ld
#endif /* TILE_H */