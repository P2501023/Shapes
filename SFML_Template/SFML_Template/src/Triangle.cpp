#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(sf::Vector2f o, sf::Vector2f p, sf::Vector2f r, sf::Vector2f s) : Shape(4)
{
	p1 = o;
	p2 = p;
	p3 = r;
	p4 = s;

	makeTriangle();
}

void Triangle::makeTriangle()
{
	points[0].position = p1;
	points[0].color = sf::Color::White;

	points[1].position = p2;
	points[1].color = sf::Color::White;

	points[2].position = p3;
	points[2].color = sf::Color::White;
	
	points[3].position = p4;
	points[3].color = sf::Color::White;


}
