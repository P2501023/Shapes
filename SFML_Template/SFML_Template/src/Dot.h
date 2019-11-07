#pragma once
#include <SFML/Graphics.hpp>
#include "Shape.h"

class Point : public Shape
{
public:

	Point(sf::Vector2f o, sf::Vector2f p);


private:

	sf::Vector2f p1;
	sf::Vector2f p2;

	void makePoint();
};