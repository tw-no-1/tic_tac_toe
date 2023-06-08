//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"
#include <iostream>

Game::Game() {
}

void Game::newPiece(int row, int col) {
    if(bitBoard[row*3 + col] == '0') {
        pieces[n] = Piece(turn);
        pieces[n].setPosition(row, col);
        n++;
        turn = !turn;
        bitBoard[row*3 + col] = n%2 ? 'O' : 'X';
    }

    if(n == 9) {
        for(int i = 0; i < n; i++) {
            std::cout << bitBoard[i] << "   ";
            if((i+1) % 3 == 0) {
                std::cout << std::endl;
            }
        }
    }
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(board);
    for(int i = 0; i < 9; i++) {
        target.draw(pieces[i]);
    }
}