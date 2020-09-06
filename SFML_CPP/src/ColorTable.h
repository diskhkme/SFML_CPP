#pragma once

#include "SFML/Graphics.hpp"
#include <unordered_map>

enum class ColorNames
{
	BLACK, WHITE, RED, LIME, BLUE, YELLOW, CYAN, MAGENTA,
	SILVER, GRAY, MAROON, OLIVE, GREEN, PURPLE, TEAL, NAVY,
};

class ColorTable
{
public:
	static sf::Color GetColor(ColorNames colorName);
};