#pragma once
#include <SFML/Graphics.hpp>
#include "Shape.h"

class Rectangle : public Shape
{
public:

	Rectangle(sf::Vector2f o, sf::Vector2f p, sf::Vector2f r, sf::Vector2f s, sf::Vector2f t);

private:

	sf::Vector2f p1;
	sf::Vector2f p2;
	sf::Vector2f p3;
	sf::Vector2f p4;
	sf::Vector2f p5;

	void makeRectangle();


};

