#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Game.h"

int main()
{
    Game game = Game();
    sf::RenderWindow window(sf::VideoMode(600, 600), "tic tac toe", sf::Style::Close);
    window.setVerticalSyncEnabled(true);
    //test

    while (window.isOpen()) {
        sf::Event event = sf::Event();

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if ((0 < event.mouseButton.x) && (event.mouseButton.x < 600) && (0 < event.mouseButton.y) &&
                        (event.mouseButton.y < 600)) {
                        game.newPiece(event.mouseButton.y/200, event.mouseButton.x/200);
                    }
                }
            }
        }

        window.draw(game);
        window.display();
    }


    return 0;
}