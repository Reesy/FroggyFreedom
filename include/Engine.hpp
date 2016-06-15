//
//  Engine.hpp
//  FroggyFreedom
//
//  Created by James Rees on 29/05/2016.
//
//

#ifndef Engine_hpp
#define Engine_hpp
#include <SFML/Graphics.hpp>
#include <stdio.h>

class Engine{
    public:
    
    sf::CircleShape PlayerShape;
    
    Engine();
    ~Engine();
    
    
    void Render(sf::RenderWindow& window);
    void Update();
    void Initialise();
    
};


#endif /* Engine_hpp */
