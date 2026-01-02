#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

class Grid
{
public:
	Grid();

	void draw(sf::RenderWindow& window) const;
	sf::Vector2i getCellFromMouse(sf::Vector2f mousePos) const;

private:
	static constexpr int ROWS = 5;
	static constexpr int COLS = 9;
	static constexpr int CELL_WIDTH = 80;
	static constexpr int CELL_HEIGHT = 100;

	sf::Vector2f m_origin;
	std::vector<sf::RectangleShape> m_cells;
};
