#include <SFML/Graphics.hpp>
#include "Engine.hpp"
#include "Player.hpp"

int main()
{
    Engine FroggyFreedom;
    sf::RenderWindow window(sf::VideoMode(900, 1200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);
    FroggyFreedom.Initialise();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            FroggyFreedom.Update();
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        shape.move(1, 1);
        
        window.clear();
        FroggyFreedom.Render(window);
        window.draw(shape);
        window.display();
    }
    
    return 0;
}