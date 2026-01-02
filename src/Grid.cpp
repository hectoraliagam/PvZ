#include "Grid.hpp"

Grid::Grid()
{
	m_origin = { 40.f, 80.f };

	m_cells.reserve(ROWS * COLS);

	for (int row = 0; row < ROWS; ++row)
	{
		for (int col = 0; col < COLS; ++col)
		{
			sf::RectangleShape cell;
			cell.setSize({ CELL_WIDTH - 2.f, CELL_HEIGHT - 2.f });
			cell.setPosition({
				m_origin.x + col * CELL_WIDTH,
				m_origin.y + row * CELL_HEIGHT
			});

			cell.setFillColor(sf::Color(50, 170, 50));
			cell.setOutlineThickness(1.f);
			cell.setOutlineColor(sf::Color::Black);

			m_cells.push_back(cell);
		}
	}
}

void Grid::draw(sf::RenderWindow& window) const
{
	for (const auto& cell : m_cells)
	{
		window.draw(cell);
	}
}

sf::Vector2i Grid::getCellFromMouse(sf::Vector2f mousePos) const
{
	mousePos -= m_origin;

	int col = static_cast<int>(mousePos.x) / CELL_WIDTH;
	int row = static_cast<int>(mousePos.y) / CELL_HEIGHT;

	if (row < 0 || row >= ROWS || col < 0 || col >= COLS)
	{
		return { -1, -1 };
	}
	
	return { row, col };
}
