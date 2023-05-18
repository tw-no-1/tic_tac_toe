//
// Created by 褚翊喨 on 2023/5/13.
//

#include "Texture.h"

sf::Texture Texture::loadTexture(const char *name) {
    sf::Texture tmp;
    tmp.loadFromFile(name);

    return tmp;
}

sf::Texture Texture::o = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/vecteezy_red-circle-png-red-dot-icon_16017076_782.png");
sf::Texture Texture::x = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/vecteezy_red-x-png-free-download_19899989_464.png");
sf::Texture Texture::board = Texture::loadTexture("/Users/mba/myCode/tic-tac-toe/Texture/Tic-tac-toe.png");