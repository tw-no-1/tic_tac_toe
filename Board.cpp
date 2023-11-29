//
// Created by 褚翊喨 on 2023/5/14.
//

#include "Board.h"

Board::Board() {
    sprite = sf::Sprite();
    sf::Texture texture;

    sprite.setTexture(Texture::board);
    sprite.setScale(sf::Vector2f(1, 1));
}

void Board::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(sprite);
}