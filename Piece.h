//
// Created by 褚翊喨 on 2023/5/19.
//

#ifndef TIC_TAC_TOE_PIECE_H
#define TIC_TAC_TOE_PIECE_H

#include "Texture.h"

class Piece : public sf::Drawable{
    friend class Game;

public:
    Piece();
    Piece(bool shape); // O : 0, X : 1
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

protected:
    sf::Sprite sprite;
    void setPosition(int row, int col);

private:
    bool display = 1;
};


#endif //TIC_TAC_TOE_PIECE_H
