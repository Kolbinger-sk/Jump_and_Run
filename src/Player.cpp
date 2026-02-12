#include "Player.h"

Player::Player()
{
    body.setSize({ 60.f, 80.f });
    body.setFillColor(sf::Color::White);
    body.setPosition({ 100.f, 100.f });

    velocityX = 0.f;
    velocityY = 0.f;

    moveSpeed = 5.f;
    jumpStrength = 14.f;
    gravity = 0.8f;

    onGround = true;
}

void Player::update(float groundY)
{
    velocityX = 0.f;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        velocityX = -moveSpeed;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        velocityX = moveSpeed;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space) && onGround)
    {
        velocityY = -jumpStrength;
        onGround = false;
    }

    velocityY += gravity;

    body.move({ velocityX, velocityY });

    float bottom = body.getPosition().y + body.getSize().y;

    if (bottom >= groundY)
    {
        body.setPosition({ body.getPosition().x, groundY - body.getSize().y });
        velocityY = 0.f;
        onGround = true;
    }
}

void Player::draw(sf::RenderWindow& window)
{
    window.draw(body);
}
