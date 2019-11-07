#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(sf::Vector2f o, sf::Vector2f p, sf::Vector2f r, sf::Vector2f s, sf::Vector2f t) : Shape(5)
{
	p1 = o;
	p2 = p;
	p3 = r;
	p4 = s;
	p5 = t;

	makeSquare();
}

void Square::makeSquare()
{
	points[0].position = p1;
	points[0].color = sf::Color::White;

	points[1].position = p2;
	points[1].color = sf::Color::White;

	points[2].position = p3;
	points[2].color = sf::Color::White;

	points[3].position = p4;
	points[3].color = sf::Color::White;

	points[4].position = p5;
	points[4].color = sf::Color::White;

}
