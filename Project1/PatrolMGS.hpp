#include "Enemy.hpp"

class PatrolMGS : public Enemy{
public:
	PatrolMGS(float x, float y);
	~PatrolMGS();
	void update(float deltaTime, Grid& grid) override;
	void setMenaced(bool value);


private:
	static constexpr float SPEED = 100.0f;

	bool isMenaced = false;
};  