#pragma once
#include <SFML/Graphics.hpp>

class Player
{
private:
    sf::RectangleShape body;

    float velocityX;
    float velocityY;

    float moveSpeed;
    float jumpStrength;
    float gravity;

    bool onGround;

public:
    Player();

    void update(float groundY);
    void draw(sf::RenderWindow& window);
};
