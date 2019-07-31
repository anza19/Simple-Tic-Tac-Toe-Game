#include <SFML/Graphics.hpp>
#include <iostream>

//Screen dimensions
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main(){

    //This block here renders the window.
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome Game");

    //This is the game while loop
    //It runs for as long as the window is open
    while(window.isOpen()){

        //Here we create a game object
        sf::Event event;

        //We poll the event here
        while(window.pollEvent(event)){

            //Here we check the event type
            switch(event.type){

                //If its closed, ie event closed
                case sf::Event::Closed:

                    //We clear and close the window
                    window.close();
                    window.clear();
                    break;

            }
        }
        
        //Clear the window after every frame
        window.clear();

        //objects to draw
        window.display();

    }
    return 0;
}
