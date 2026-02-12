#include "Game.h"
#include <optional>

Game::Game()
    : window(sf::VideoMode({ 800u, 600u }), "Jump and Run")
{
    window.setFramerateLimit(60);
}

void Game::run()
{
    while (window.isOpen())
    {
        while (std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        player.update(level.getGroundY());

        window.clear(sf::Color::Black);
        level.draw(window);
        player.draw(window);
        window.display();
    }
}
