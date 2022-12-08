#include "Game_token.h"


namespace Grid_game{

void Token::move(direction dir)
    {

    switch(dir)
        {
         case direction:: up:
              if (((y - 1) >= 0) && (board.retrieve_space(x, y - 1).type() != Space::terrain_type::barrier))
            {
               y -=1;
             }
                break;
        case direction:: right:
              if ((!((x + 1) == board.width())) && (board.retrieve_space(x + 1,y).type() != Space::terrain_type::barrier))
             {
                 x +=1;
             }
                break;
        case direction:: left:
                if ((!((x - 1) == board.width())) && (board.retrieve_space(x-1, y ).type() != Space::terrain_type::barrier))
             {
              x -=1;
             }
                break;
        case direction:: down:
             if((!((y+1) == board.height())) && (board.retrieve_space(x, y+1).type() != Space::terrain_type::barrier))
             {
                    y +=1;
                }

                break;
        }
    }
// void Token:: move(direction dir) {

// }

void Token:: move_special(vector<direction> spec) {
    move(spec [0]);
}

void  Token::apply_terrain_effect(const Space::terrain_type type) {

 switch(type)
    {
        case Space::lava:
        hp =0;
        pp =0;
        break;

        case Space::water:
        hp -= 1;
        pp -=1;
    }
}

}//end namespace