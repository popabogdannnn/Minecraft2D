#include "Block.h"

Block::Block()
{
}

Block::Block(std::string _type, sf::Texture _texture)
{
	this->type = _type;
	this->texture = _texture;
}
