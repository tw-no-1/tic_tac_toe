//
// Created by 褚翊喨 on 2023/5/14.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Piece.h"

class Game : public sf::Drawable{
public:
    Game();
    Board board = Board();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
    Piece pieces[18];
};


#endif //TIC_TAC_TOE_GAME_H