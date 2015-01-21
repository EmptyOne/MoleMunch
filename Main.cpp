//main.cpp

#include "stdafx.h"



int main(int argc, char* argv[])
{
	sf::RenderWindow window;
	window.create(sf::VideoMode(960, 800), "Mole Munch");

	sf::Texture player;
	player.loadFromFile("../assets/test.png", sf::IntRect(128, 64, 64, 64));
	sf::Sprite playerS(player);
	playerS.setPosition(64, 64);

	sf::Texture background;
	background.loadFromFile("../assets/text.png");
	sf::Sprite bg(background);

	sf::Texture vegetable;
	vegetable.loadFromFile("../assets/test.png", sf::IntRect(0, 130, 64, 64));
	sf::Sprite vegetableS(vegetable);
	vegetableS.setPosition(128, 128);
	sf::Sprite moveVeg(vegetable);
	moveVeg.setPosition(playerS.getPosition());

	sf::Clock clock;
	int ammo = 0;
	
	
	while (window.isOpen())
	{

		sf::FloatRect windowBox = bg.getGlobalBounds();
		sf::FloatRect boundingBox = playerS.getGlobalBounds();
		sf::FloatRect boundingBox2 = vegetableS.getGlobalBounds();
		sf::FloatRect vegBox = moveVeg.getGlobalBounds();
		sf::Time vegTimer = clock.getElapsedTime();
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		sf::View view(sf::FloatRect(100, 100, 500, 400));
		view.setCenter(64, 64);
		view.move(playerS.getPosition());
		window.setView(view);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		window.clear(sf::Color(0xf, 0x2f, 0xf3, 0xff));

		bg.setPosition(0, 0);
		window.draw(bg);


<<<<<<< HEAD



		
=======
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			playerS.move(-3, 0);
			sf::Vector2f position = playerS.getPosition();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			playerS.move(3, 0);
			sf::Vector2f position = playerS.getPosition();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			playerS.move(0, -3);
			sf::Vector2f position = playerS.getPosition();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			playerS.move(0, 3);
			sf::Vector2f position = playerS.getPosition();
		}
>>>>>>> origin/master
		
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << vegTimer.asSeconds() << std::endl;
			while (vegTimer.asSeconds() < 10 && vegBox.intersects(windowBox) && ammo != 0)
			{			
				moveVeg.move(1, 0);
				window.draw(moveVeg);
				//ammo--;
			}
			if (vegTimer.asSeconds() > 15)
			{
				moveVeg.setPosition(playerS.getPosition());
				vegTimer = clock.restart();

			}
			
			
		}



		if (boundingBox.intersects(boundingBox2))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			{
				
				vegetableS.setPosition(-500, -500);
				ammo++;
			}
		}

		window.draw(vegetableS);
		window.draw(playerS);


		window.display();
	}

	return 0;
}
