//
// Created by 褚翊喨 on 2023/5/19.
//

#include "Piece.h"

Piece::Piece() = default;

Piece::Piece(bool shape) {
    sprite = sf::Sprite();

    if(shape) {
        sprite.setTexture(Texture::x);
        sprite.setOrigin(sf::Vector2f(float(sprite.getTexture()->getSize().x / 2), float(sprite.getTexture()->getSize().y / 2)));
        sprite.setScale(sf::Vector2f(0.05f, 0.05f));
    }
    else {
        sprite.setTexture(Texture::o);
        sprite.setOrigin(sf::Vector2f(float(sprite.getTexture()->getSize().x / 2), float(sprite.getTexture()->getSize().y / 2)));
        sprite.setScale(sf::Vector2f(0.1f, 0.1f));
    }

}

void Piece::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(display) {
        target.draw(sprite);
    }
}

void Piece::setPosition(int row, int col) {
    sprite.setPosition(col*200 + 100, row*200 + 100);
}