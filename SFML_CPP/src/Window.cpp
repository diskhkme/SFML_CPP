#include "Window.h"

Window::Window(const std::string& title, int width, int height)
{
	m_Window.create( sf::VideoMode{ 600, 600 }, "SFML Test!" );
	m_IsRunning = true;
	m_Window.setFramerateLimit(60);
}

Window::~Window()
{
}

bool Window::CheckClosed()
{
	sf::Event event;

	while (m_Window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			m_IsRunning = false;
			m_Window.close();
			return true;
			break;
		}
	}
	return false;
}

void Window::Clear()
{
	m_Window.clear();
}

void Window::DrawCircle(float radius, float xpos, float ypos, ColorNames colorName)
{
	sf::CircleShape shape(radius);
	shape.setFillColor(ColorTable::GetColor(colorName));
	shape.setPosition(xpos, ypos);

	m_Window.draw(shape);
}

void Window::Show()
{
	m_Window.display();
}

bool Window::IsKeyPressed(const std::string& direction)
{
	if(direction == "Left")
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left);
	else if (direction == "Right")
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right);
	else if (direction == "Up")
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up);
	else if (direction == "Down")
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down);
}

