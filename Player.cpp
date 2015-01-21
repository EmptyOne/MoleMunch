//Player.cpp

#include "stdafx.h"
#include "Player.h"

Player::Player(sf::Sprite)
{
	Reset();
};

Player::~Player()
{

}

void Player::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		m_x--;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		m_x++;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		m_y--;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		m_y++;


}

void Player::Reset()
{

}
