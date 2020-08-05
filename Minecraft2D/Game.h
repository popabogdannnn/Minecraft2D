#pragma once
#include "Renderer.h"
#include "GameData.h"
#include <thread>

class Game
{
private:
	static Game *GameInstance;
	GameData* gameData;
	Renderer* renderer;
	Game();

public:
	

	~Game();
	static Game* getInstance();
	void run();
	
};

