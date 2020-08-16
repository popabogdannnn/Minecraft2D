#pragma once
#include <string>
#include <SFML/Graphics.hpp>

class Block
{
public:
    std::string type;
    sf::Texture texture;

    Block();
    Block(std::string, sf::Texture);
};

