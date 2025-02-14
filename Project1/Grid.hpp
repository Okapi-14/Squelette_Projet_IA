#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;

const int GRID_WIDTH = 40;
const int GRID_HEIGHT = 30;
const int CELL_SIZE = 25;

struct Cell {
    bool walkable;
    Vector2f position;
    RectangleShape shape;
};

class Grid {
public:
    Grid();
    void loadFromFile(const string& filename);
    void draw(RenderWindow& window);
    Cell& getCell(int x, int y);
private:
    vector<vector<Cell>> cells;
};

#endif      
