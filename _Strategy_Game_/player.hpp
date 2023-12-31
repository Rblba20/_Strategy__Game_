#ifndef PLAYER_H
#define PLAYER_H

#include "config.hpp"
#include "unit.hpp"

namespace ld {

enum class PlayerType {
    Human,
    AI,
};

class Player {
  public:
    Player(ld::PlayerType player_type, ld::Faction faction,
           ld::TileType tile_type);

    std::shared_ptr<ld::Unit> selected_unit_;

    bool is_human() const;

    const ld::PlayerType player_type_;
    const ld::Faction faction_;
    const ld::TileType tile_type_;

    int coins_;
    int tiles_;
    int all_tiles_;
};
} // namespace ld

#endif /* PLAYER_H */