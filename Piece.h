//
// Created by 褚翊喨 on 2023/5/19.
//

#ifndef TIC_TAC_TOE_PIECE_H
#define TIC_TAC_TOE_PIECE_H

#include "Texture.h"

class Piece : public sf::Drawable{
public:
    Piece();
    Piece(bool shape); // O : 0, X : 1

protected:
    sf::Sprite sprite;
};


#endif //TIC_TAC_TOE_PIECE_H
