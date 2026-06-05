#include <SFML/Graphics.hpp>
#include <iostream>

namespace Jungle
{
    class Principal
    {

        // Private
    private:
        sf::RenderWindow window;

        // Public
    public:
        // Constructor
        Principal();

        // Destructor
        ~Principal();

        // Execute
        void Executar();
    };
}
