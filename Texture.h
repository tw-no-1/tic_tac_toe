//
// Created by 褚翊喨 on 2023/5/13.
//

#ifndef TIC_TAC_TOE_TEXTURE_H
#define TIC_TAC_TOE_TEXTURE_H

#include <SFML/Graphics.hpp>

class Texture {
public:
    static sf::Texture x;
    static sf::Texture o;
    static sf::Texture board;

    static sf::Texture loadTexture(const char* name);
};


#endif //TIC_TAC_TOE_TEXTURE_H
