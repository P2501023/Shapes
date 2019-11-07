#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(int x)
{
	points.setPrimitiveType(sf::LinesStrip);
	points.resize(x);
}

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const

{
	target.draw(points);
}