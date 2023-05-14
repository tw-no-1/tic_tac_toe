//
// Created by 褚翊喨 on 2023/5/14.
//

#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include "Texture.h"

class Board : public sf::Drawable {
public:
    Board();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
    sf::Sprite sprite;
};


#endif //TIC_TAC_TOE_BOARD_H
