#pragma once
#include <SFML/Graphics.hpp>
#include "Shape.h"


class Line : public Shape
{

public:
	
	Line(sf::Vector2f o, sf::Vector2f p);

private:

	// Atributes
	sf::Vector2f p1;
	sf::Vector2f p2;

	// Operation
	void makeLine();
};