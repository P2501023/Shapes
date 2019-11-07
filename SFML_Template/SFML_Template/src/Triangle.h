#pragma once
#include <SFML/Graphics.hpp>
#include "Shape.h"

class Triangle : public Shape
{
public:

	Triangle(sf::Vector2f o, sf::Vector2f p, sf::Vector2f r, sf::Vector2f s);

private:

	sf::Vector2f p1;
	sf::Vector2f p2;
	sf::Vector2f p3;
	sf::Vector2f p4;

	void makeTriangle();
};