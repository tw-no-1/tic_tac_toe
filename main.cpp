#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Game.h"

int main()
{
    Game game = Game();
    sf::RenderWindow window(sf::VideoMode(1200, 1250), "tic tac toe", sf::Style::Close);
    window.setVerticalSyncEnabled(true);


    while (window.isOpen()) {
        sf::Event event = sf::Event();

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if ((0 < event.mouseButton.x) && (event.mouseButton.x < 1200) && (0 < event.mouseButton.y) &&
                        (event.mouseButton.y < 1200)) {
                        game.newPiece(event.mouseButton.y/400, event.mouseButton.x/400);
                    } else if ((1500 < event.mouseButton.x) && (event.mouseButton.x < 2000) &&
                               (0 < event.mouseButton.y) && (event.mouseButton.y < 50)) {
                    }
                }
            }
        }

        window.draw(game);
        window.display();
    }


    return 0;
}