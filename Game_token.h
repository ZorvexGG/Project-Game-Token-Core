#include "Game_token_base.h"
#include <vector>

namespace Grid_game{

class Token : public Token_base  {

     public: using Token_base::Token_base;

     protected: 
  void  move(direction) override;
  void  move_special(vector<direction>) override;
  void  apply_terrain_effect(const Space::terrain_type) override;

};
}