#pragma once
#include "Block.h"
#include "Sky.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <map>
#include <cmath>
#include <list>

const double GRAV_ACC = 9.81;
const int IN_MENU_STATE = 1;
const int IN_GAME_STATE = 2;
const int GAME_CLOSED_STATE = 0;
const int WINDOW_WIDTH = 512;
const int WINDOW_HEIGHT = 512;
const int GAME_MAP_HEIGHT = 300;
const int TEXTURE_RES = 16;
const int TEXTURE_SCALE = 2;
const int WORLD_GEN_OFFSET = 50;

class GameData
{
public:
	int gameState;
	std::map <std::string, Block> blockArray;
	sf::Vector2i cameraPosition;

	std::list <std::pair<int, std::vector<Block> > > gameMap;
	std::list <std::pair<int, std::vector<Block> > >::iterator GameMapIteratorLeft;
	std::list <std::pair<int, std::vector<Block> > >::iterator GameMapIteratorRight;
	std::list <std::pair<int, std::vector<Block> > >::iterator GameMapIteratorCenter;

	Sky sky;
	void loadTextures();
	void generateGameMap();
	GameData();
	~GameData();
};

