#include "GameData.h"


//public functions

void GameData::loadTextures()
{
	sf::Texture tx;
	//std::filesystem::path fp("textures/blocks");
	if (!tx.loadFromFile("textures/blocks/dirt.png")) {
		std::cout << "????";
	}

	if (!sky.texture.loadFromFile("textures/environment/sky.png")) {
		std::cout << "???";
	}
	sky.sprite.setTexture(sky.texture);
	this->blockArray["dirt"] = Block("dirt", tx);
}

void GameData::generateGameMap()
{

}

GameData::GameData()
{
	
	

}

GameData::~GameData()
{

}
