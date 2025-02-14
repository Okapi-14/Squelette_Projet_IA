#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include "Grid.hpp"
#include <vector>
#include "EnemyManager.hpp"

EnemyManager manager;

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main() {
    RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Jeu SFML - IA Ennemis");
    window.setFramerateLimit(60);

    Player player(200, 400);
    Grid grid;
    grid.loadFromFile("map.txt");

    manager.createMGSPatrol(300, 300);
    manager.createMGSPatrol(500, 300);
    manager.createMGSPatrol(600, 300);

    Clock clock;

    while (window.isOpen()) {
        Time dt = clock.restart();
        float deltaTime = dt.asSeconds();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::W)) {
            manager.setMenacedState(true);
        }

        player.update(deltaTime, grid);

        window.clear();
        grid.draw(window);
        window.draw(player.shape);
        manager.update(window,deltaTime,grid);
        window.display();
    }
    return 0;
}

