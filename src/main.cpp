#include <SFML/Graphics.hpp>
#include "Engine.hpp"
#include "Player.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(900, 600), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Blue);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
            
            
			if (event.type == sf::Event::Closed)
				window.close();
		}
        
        shape.move(1, 1);
        
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}