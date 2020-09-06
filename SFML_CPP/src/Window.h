#pragma once
#include "SFML/Graphics.hpp"
#include "ColorTable.h"

class Window
{
public:
	Window(const std::string& title, int width, int height);
	~Window();

	inline bool IsRunning(){ return m_IsRunning; }
	bool CheckClosed();
	void Clear();
	void DrawCircle(float radius, float xpos, float ypos, ColorNames colorName);
	void Show();
private:
	sf::RenderWindow m_Window;
	bool m_IsRunning;
};