//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Game.h"

Game::Game() {
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(board);
}