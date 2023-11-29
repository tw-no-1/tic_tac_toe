//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"
#include <iostream>

Game::Game() {
}

void Game::newPiece(int row, int col) {
    if(bitBoard[row*3 + col] == '0' && notGameOver) {
        pieces[n] = Piece(turn);
        pieces[n].setPosition(row, col);
        n++;
        turn = !turn;
        bitBoard[row*3 + col] = n%2 ? 'O' : 'X';
        win();
    }
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for(int i = 0; i < 3; i++) {
        target.draw(square[i]);
    }

    target.draw(board);
    for(int i = 0; i < 9; i++) {
        target.draw(pieces[i]);
    }
}

void Game::win() {
    if(bitBoard[0] == bitBoard[1] && bitBoard[1] == bitBoard[2] && bitBoard[0] != '0') {
        square[0].setPosition(0, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 0);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(400, 0);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[3] == bitBoard[4] && bitBoard[4] == bitBoard[5] && bitBoard[3] != '0') {
        square[0].setPosition(0, 200);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(400, 200);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[6] == bitBoard[7] && bitBoard[7] == bitBoard[8] && bitBoard[6] != '0') {
        square[0].setPosition(0, 400);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 400);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(400, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[0] == bitBoard[3] && bitBoard[3] == bitBoard[6] && bitBoard[0] != '0') {
        square[0].setPosition(0, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(0, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(0, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[1] == bitBoard[4] && bitBoard[4] == bitBoard[7] && bitBoard[1] != '0') {
        square[0].setPosition(200, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(200, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[2] == bitBoard[5] && bitBoard[5] == bitBoard[8] && bitBoard[2] != '0') {
        square[0].setPosition(400, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(400, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(400, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[0] == bitBoard[4] && bitBoard[4] == bitBoard[8] && bitBoard[0] != '0') {
        square[0].setPosition(0, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(400, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
    else if(bitBoard[2] == bitBoard[4] && bitBoard[4] == bitBoard[6] && bitBoard[2] != '0') {
        square[0].setPosition(400, 0);
        square[0].setSize(sf::Vector2f(200.0, 200.0));
        square[0].setFillColor(sf::Color::Green);

        square[1].setPosition(200, 200);
        square[1].setSize(sf::Vector2f(200.0, 200.0));
        square[1].setFillColor(sf::Color::Green);

        square[2].setPosition(0, 400);
        square[2].setSize(sf::Vector2f(200.0, 200.0));
        square[2].setFillColor(sf::Color::Green);

        notGameOver = 0;
    }
}

void Game::restart() {
    std::cout << "test" << std::endl;
}