#include "PatrolMGS.hpp"

class EnemyManager {
public:
	void update(RenderWindow& window, float deltaTime, Grid& grid);
	void draw(RenderWindow& window);
	void deleteAllEnemy();


	void createMGSPatrol(float posX, float posY);
	void setMenacedState(bool value);

private:
	vector<shared_ptr<PatrolMGS>> m_mgs_enemies;
};