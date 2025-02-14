#include "PatrolMGS.hpp"

PatrolMGS::PatrolMGS(float x, float y) : Enemy(x, y)
{
	shape.setPosition(x, y);
	shape.setFillColor(Color::Magenta);
	shape.setSize({ 20,20 });
}

PatrolMGS::~PatrolMGS()
{
}

void PatrolMGS::update(float deltaTime, Grid& grid)
{
}

void PatrolMGS::setMenaced(bool value)
{
	isMenaced = true;
	shape.setFillColor(Color::Yellow);
}
