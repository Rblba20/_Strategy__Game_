#include "player.hpp"

namespace ld {

Player::Player(ld::PlayerType player_type, ld::Faction faction,
               ld::TileType tile_type)
    : player_type_(player_type), faction_(faction), tile_type_(tile_type),
      coins_(10), tiles_(0), all_tiles_(0) {}
}