//GameState.h

//Forward declare
//class Player;
//class Vegetable;


class GameState
{
public:
	GameState();

	//bool Update(sf::time deltatime);
	void Draw();
	void SetType(int i);
	int GetType();
	void CollisionChecking();

private:
	//Player* m_player;
	//Vegetable* m_carrot;
	sf::RenderWindow m_window;

};