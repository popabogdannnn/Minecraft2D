#include "Renderer.h"



//public functions

Renderer::Renderer(GameData* _gameData)
{
	this->gameData = _gameData;
}



void Renderer::pollEventsInGame()
{
	sf::Event ev;
	while (window->pollEvent(ev)) {
		if (ev.type == sf::Event::Closed) {
			this->window->close();
		}
		if (ev.type == sf::Event::KeyPressed)
		{
			switch (ev.key.code)
			{
			case sf::Keyboard::Left:
				this->gameData->cameraPosition.x -= 10;
				break;
			case sf::Keyboard::Right:
				this->gameData->cameraPosition.x += 10;
				break;
			case sf::Keyboard::Up:
				this->gameData->cameraPosition.y += 10;
				break;
			case sf::Keyboard::Down:
				this->gameData->cameraPosition.y -= 10;
				break;
			}
		}
	}

}

void Renderer::drawSky()
{
	
	this->window->draw(this->gameData->sky.sprite);
}

void Renderer::drawInGame()
{
	this->drawSky();
}


void Renderer::renderInGame()
{
	this->pollEventsInGame();	

	this->window->clear();

	this->drawInGame();

	this->window->display();
}



void Renderer::startRendering()
{
	this->window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Minecraft 2D", sf::Style::Default ^ sf::Style::Resize);
	this->gameData->loadTextures();
	this->gameData->cameraPosition = sf::Vector2i(
		0,
		GAME_MAP_HEIGHT / 2
		);
	while (this->window->isOpen()) {
		
		this->renderInGame();
		
	}
	this->gameData->gameState = GAME_CLOSED_STATE;
}





