//
// Created by 褚翊喨 on 2023/5/13.
//

#include "Texture.h"

sf::Texture Texture::loadTexture(const char *name) {
    sf::Texture tmp;
    tmp.loadFromFile(name);

    return tmp;
}

sf::Texture Texture::o = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/images.png");
sf::Texture Texture::x = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/36-368091_heart-simple-shape-silhouette-tic-tac-toe-cross.png");
sf::Texture Texture::board = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/Tic-tac-toe.png");