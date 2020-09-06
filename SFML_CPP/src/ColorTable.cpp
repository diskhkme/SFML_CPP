#include "ColorTable.h"

sf::Color ColorTable::GetColor(ColorNames colorName)
{
    switch (colorName)
    {
        case ColorNames::BLACK:
            return sf::Color(0, 0, 0);
        case ColorNames::WHITE:
            return sf::Color(255, 255, 255);
        case ColorNames::RED:
            return sf::Color(255, 0, 0);
        case ColorNames::LIME:
            return sf::Color(0, 255, 0);
        case ColorNames::BLUE:
            return sf::Color(0, 0, 255);
        case ColorNames::YELLOW:
            return sf::Color(255, 255, 0);
        case ColorNames::CYAN:
            return sf::Color(0, 255, 255);
        case ColorNames::MAGENTA:
            return sf::Color(255, 0, 255);
        case ColorNames::SILVER:
            return sf::Color(192, 192, 192);
        case ColorNames::GRAY:
            return sf::Color(128, 128, 128);
        case ColorNames::MAROON:
            return sf::Color(128, 0, 0);
        case ColorNames::OLIVE:
            return sf::Color(128, 128, 0);
        case ColorNames::GREEN:
            return sf::Color(0, 128, 0);
        case ColorNames::PURPLE:
            return sf::Color(128, 0, 128);
        case ColorNames::TEAL:
            return sf::Color(0, 128, 128);
        case ColorNames::NAVY:
            return sf::Color(0, 0, 128);
        default:
            return sf::Color(255, 0, 255);
    }
}
