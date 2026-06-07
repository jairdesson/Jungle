#include "..\Header\principal.hpp"
#include <SFML\Window.hpp>

// Constructor
Jungle::Principal::Principal() : Window(sf::VideoMode({800, 600}), "Jungle Fight")
{
    Tick();
}

// Destructor
Jungle::Principal::~Principal()
{
}

// Event Tick
void Jungle::Principal::Tick()
{
    // Player
    sf::RectangleShape Player(sf::Vector2f(25.0f, 25.0f));
    Player.setFillColor(sf::Color::White);
    Player.setPosition(sf::Vector2{50.0f,50.0f});

    // Event Tick Loop
    while (Window.isOpen())
    {
        while (const auto event = Window.pollEvent())
        {
            // Close Window
            if (event->is<sf::Event::Closed>())
            {
                Window.close();
            }
            // Update Frame
            Window.clear();

            // Draw Player
            Window.draw(Player);

            // Show Display
            Window.display();
        }
    }
   
}