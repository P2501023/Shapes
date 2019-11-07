#include "Dot.h"
#include <iostream>

using namespace std;

Point::Point(sf::Vector2f o, sf::Vector2f p) : Shape(2)

{
	p1 = o;
	p2 = p;

	makePoint();
}

void Point::makePoint()
{
	points[0].position = p1;
	points[0].color = sf::Color::White;

	points[1].position = p2;
	points[1].color = sf::Color::White;
}