#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum class Goal {
    Shoot,
    Reload,
    Patrolling,
    Chase
};


class GOAPPlanner {
public:
    vector<Action*> Plan(const State& initialState, Goal goal) {}
};