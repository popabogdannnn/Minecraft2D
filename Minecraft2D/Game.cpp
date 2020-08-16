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
	delete this->gameData;
	delete this->renderer;
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
	this->gameData->gameState = IN_GAME_STATE;
	std::thread renderThread(&Renderer::startRendering, this->renderer);

	while (this->gameData->gameState != GAME_CLOSED_STATE) {

	}
	renderThread.join();
}
