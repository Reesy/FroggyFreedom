//
//  Player.hpp
//  FroggyFreedom
//
//  Created by James Rees on 29/05/2016.
//
//

#ifndef Player_hpp
#define Player_hpp


#include <stdio.h>


class Player{
    int health;
    float velocity;

    Player();
    
    void Render();
    void Update();
    void Initialise();
    
    
    
};



#endif /* Player_hpp */
