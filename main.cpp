#include <SFML/Graphics.hpp>
#include <experimental/optional>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    
    std::experimental::optional<int> optional_int;

    auto lambda{[] (auto x, auto y)
    {
        return x + y;
    }};

    lambda(5, 8);

    return 0;
}
