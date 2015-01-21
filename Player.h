//player.h

#pragma once

class Player
{
public:
	Player(sf::Sprite);
	~Player();

	void Update();
	void Reset();

private:
	float m_x;
	float m_y;
};

