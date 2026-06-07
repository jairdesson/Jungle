#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

namespace Jungle
{
    class Principal
    {
        // Private
    private:
    sf::RenderWindow Window;

        // Public
    public:
        // Constructor
        Principal(/* args */);

        // Destructor
        ~Principal();

        // Event Tick
        void Tick();
    };
}