#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Level.h"

class Game
{
private:
    sf::RenderWindow window;
    Player player;
    Level level;

public:
    Game();
    void run();
};
