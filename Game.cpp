//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"
#include <iostream>

Game::Game() {
}

void Game::newPiece(int row, int col) {
    if(bitBoard[row*3 + col]) {
        pieces[n] = Piece(turn);
        pieces[n].setPosition(row, col);
        n++;
        turn = !turn;
        bitBoard[row*3 + col] = 0;
    }
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(board);
    for(int i = 0; i < 9; i++) {
        target.draw(pieces[i]);
    }
}