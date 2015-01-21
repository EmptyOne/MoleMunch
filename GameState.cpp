//Gamestate.cpp
#include "stdafx.h"
#include "GameState.h"

GameState::GameState()
{
	
	sf::Texture background;
		background.loadFromFile("../assets/text.png");
		sf::Sprite bg(background);
		

	//Få in från Player och Vegetable.
	/*sf::Texture player;
	player.loadFromFile("../assets/test.png", sf::IntRect(128, 64, 64, 64));
	sf::Sprite playerS(player);
	playerS.setPosition(64, 64);

	

	sf::Texture vegetable;
	vegetable.loadFromFile("../assets/test.png", sf::IntRect(0, 130, 64, 64));
	sf::Sprite vegetableS(vegetable);
	vegetableS.setPosition(128, 128);
	sf::Sprite moveVeg(vegetable);
	moveVeg.setPosition(playerS.getPosition());*/



}

//bool GameState::Update(sf::time deltatime)
//{
// while (window.isOpen() == true)
	//{
	//sf::FloatRect windowBox = bg.getGlobalBounds();
	//sf::FloatRect boundingBox = playerS.getGlobalBounds();
	//sf::FloatRect boundingBox2 = vegetableS.getGlobalBounds();
	//sf::FloatRect vegBox = moveVeg.getGlobalBounds();
	//}
//}

void GameState::Draw()
{

	//m_window.draw(bg);
	//m_window.draw(vegetableS);
	//m_window.draw(playerS);
	
}

void GameState::SetType(int i)
{

}

int GameState::GetType()
{
	return 0;
}

void GameState::CollisionChecking()
{

}

