#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

class Shape : public sf::Drawable
{
public:

		Shape(int x);

protected:

	//connecting points into line shape

	sf::VertexArray points;
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};