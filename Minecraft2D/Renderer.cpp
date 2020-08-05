#include "Renderer.h"



//public functions

Renderer::Renderer(GameData* _gameData)
{
	this->gameData = _gameData;
}

void Renderer::startRendering()
{
	this->window = new sf::RenderWindow(sf::VideoMode(512, 512), "Minecraft 2D");
	while (this->window->isOpen()) {
		std::cout << "1\n";
	}
}





