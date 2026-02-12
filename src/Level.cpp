#include "Level.h"

Level::Level()
{
    ground.setSize({ 800.f, 80.f });
    ground.setFillColor(sf::Color::Green);
    ground.setPosition({ 0.f, 520.f });
}

float Level::getGroundY() const
{
    return ground.getPosition().y;
}

void Level::draw(sf::RenderWindow& window)
{
    window.draw(ground);
}
