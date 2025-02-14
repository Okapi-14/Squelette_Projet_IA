#include "EnemyManager.hpp"

void EnemyManager::update(RenderWindow& window, float deltaTime, Grid& grid)
{
	draw(window);
	for (auto& enemy : m_mgs_enemies) {
		enemy->update(deltaTime,grid);
	}
}

void EnemyManager::draw(RenderWindow& window)
{	
	for (auto& enemy : m_mgs_enemies) {
		window.draw(enemy->shape);		
	}
}

void EnemyManager::createMGSPatrol(float posX, float posY)
{
	m_mgs_enemies.push_back(make_shared<PatrolMGS>(posX, posY));
}

void EnemyManager::setMenacedState(bool value)
{
	for (auto& enemy : m_mgs_enemies) {
		enemy->setMenaced(value);
	}
}

void EnemyManager::deleteAllEnemy()
{
	m_mgs_enemies.clear();
}
