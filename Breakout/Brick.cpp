#include "Brick.h"

Brick::Brick(float x, float y, float width, float height, sf::Texture* tex)
    : _isDestroyed(false)
{
    _sprite.setPosition(x, y);
    _sprite.setTexture(*tex);
    _sprite.setScale(sf::Vector2f(width / tex->getSize().x, height / tex->getSize().y));
}

void Brick::render(sf::RenderWindow& window)
{
    if (!_isDestroyed) {
        window.draw(_sprite);
    }
}

sf::FloatRect Brick::getBounds() const
{
    return _sprite.getGlobalBounds();
}
