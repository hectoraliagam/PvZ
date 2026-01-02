#include "Game.hpp"

Game::Game()
	: m_window(sf::VideoMode({ 800, 600 }), "Plants vs Zombies")
{
	m_window.setFramerateLimit(60);
}

void Game::run()
{
	while (m_window.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::processEvents()
{
	while (auto event = m_window.pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			m_window.close();
		}
	}
}

void Game::update()
{

}

void Game::render()
{
	m_window.clear(sf::Color(30, 100, 30));
	m_window.display();
}
