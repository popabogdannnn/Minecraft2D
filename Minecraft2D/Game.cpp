#include "Game.h"

//private functions

Game::Game()
{
	this->gameData = new GameData();
}

//public functions

Game::~Game()
{
	this->GameInstance = nullptr;
}

Game* Game::getInstance()
{
	if (GameInstance == nullptr) {
		GameInstance = new Game();
	}
	return GameInstance;
}

void Game::run()
{
	renderer = new Renderer(this->gameData);
	std::thread renderThread(&Renderer::startRendering, this->renderer);
}
