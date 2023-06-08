//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"

Game::Game() {
}

void Game::newPiece(int row, int col) {
    if(bitBoard[row*3 + col] == '0') {
        pieces[n] = Piece(turn);
        pieces[n].setPosition(row, col);
        n++;
        turn = !turn;
        bitBoard[row*3 + col] = n%2 ? 'O' : 'X';
        win();
    }
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(board);
    for(int i = 0; i < 9; i++) {
        target.draw(pieces[i]);
    }
}

void Game::win() {
    if(bitBoard[0] == bitBoard[1] && bitBoard[1] == bitBoard[2] && bitBoard[0] != '0') {
    }
}