//
//  Engine.cpp
//  FroggyFreedom
//
//  Created by James Rees on 29/05/2016.
//
//

#include "Engine.hpp"
#include <iostream>

Engine::Engine(){
    
};

Engine::~Engine(){
    
};

void Engine::Render(sf::RenderWindow & window){
    //This will be used in calling the component specific render class
   // std::cout << "inside enginer render" << std::endl;
    window.draw(this->PlayerShape);
};

void Engine::Update(){
    //This will call out to update positions of game objects
    
};

void Engine::Initialise(){
    //This will be used to set the starting positions of game elements.
    std::cout << "inside initialise" << std::endl;
    PlayerShape.setRadius(100.0f);
    PlayerShape.setPosition(1, 1);
    PlayerShape.setFillColor(sf::Color::Green);

};

