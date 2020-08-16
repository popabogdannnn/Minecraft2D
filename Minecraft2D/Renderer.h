#pragma once
#include <SFML/Graphics.hpp>
#include "GameData.h"
#include <iostream>

class Renderer
{
private:

	sf::RenderWindow* window;
	GameData* gameData;

public:
	
	Renderer(GameData*);
	void renderInGame();
	void pollEventsInGame();
	void drawSky();
	void drawInGame();
	void startRendering();
};

