#pragma once
#include <SFML/Graphics.hpp>

class Level
{
private:
    sf::RectangleShape ground;

public:
    Level();

    float getGroundY() const;
    void draw(sf::RenderWindow& window);
};
