#pragma once
#include <SFML/Graphics.hpp>

class Brick {
public:
    Brick(float x, float y, float width, float height, sf::Texture* tex);
    void render(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

private:
    sf::Sprite _sprite;
    bool _isDestroyed;
};