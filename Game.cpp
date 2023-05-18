//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"

Game::Game() {
    pieces[0] = Piece(0);
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(board);
    for(int i = 0; i < 18; i++) {
        target.draw(pieces[i]);
    }
}