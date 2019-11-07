#include <SFML/Graphics.hpp>
#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Dot.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"


int main() //!< Entry point for the application
{

	Line myLine(sf::Vector2f(0, 0), sf::Vector2f(125, 125));
	Point myPoint(sf::Vector2f(125, 25), sf::Vector2f(126, 25));
	Triangle myTriangle(sf::Vector2f(150, 100), sf::Vector2f(250, 100), sf::Vector2f(200, 25), sf::Vector2f(150, 100));
	Square mySquare(sf::Vector2f(300, 100), sf::Vector2f(375, 100), sf::Vector2f(375, 25), sf::Vector2f(300, 25), sf::Vector2f(300, 100));
	Rectangle myRectangle(sf::Vector2f(425, 100), sf::Vector2f(475, 100), sf::Vector2f(475, 10), sf::Vector2f(425, 10), sf::Vector2f(425, 100));
	Circle Circle(575, 50, 50, 60);

	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		window.draw(myLine);
		window.draw(myPoint);
		window.draw(myTriangle);
		window.draw(mySquare);
		window.draw(myRectangle);
		window.draw(Circle);


		window.display();
	}
}