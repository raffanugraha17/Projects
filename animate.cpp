#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 25;
const char PLAYER_CHAR = 'O';
const char OBJECT_CHAR = '*';
const int OBJECT_SPEED = 3;

struct Object {
    int x;
    int y;
};

int main()
{
    srand(time(0));

    // Initialize player position
    int playerX = SCREEN_WIDTH / 2;
    int playerY = SCREEN_HEIGHT - 1;

    // Initialize objects
    Object objects[SCREEN_HEIGHT];
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        objects[i].x = rand() % SCREEN_WIDTH;
        objects[i].y = i;
    }

    while (true) {
        // Clear the screen
        system("cls");

        // Move and draw the objects
        for (int i = 0; i < SCREEN_HEIGHT; i++) {
            objects[i].y += OBJECT_SPEED;

            if (objects[i].y >= SCREEN_HEIGHT) {
                objects[i].x = rand() % SCREEN_WIDTH;
                objects[i].y = 0;
            }

            cout << "\033[" << objects[i].y << ";" << objects[i].x << "H" << OBJECT_CHAR;
        }

        // Draw the player
        cout << "\033[" << playerY << ";" << playerX << "H" << PLAYER_CHAR;

        // Check for collision
        for (int i = 0; i < SCREEN_HEIGHT; i++) {
            if (objects[i].x == playerX && objects[i].y == playerY) {
                cout << "\033[" << objects[i].y << ";" << objects[i].x << "H ";
                objects[i].x = rand() % SCREEN_WIDTH;
                objects[i].y = 0;
            }
        }

        // Move the player
        if (_kbhit()) {
            char key = _getch();
            if (key == 'a' && playerX > 0) {
                playerX--;
            } else if (key == 'd' && playerX < SCREEN_WIDTH - 1) {
                playerX++;
            }
        }

        // Slow down the game
        Sleep(50);
    }

    return 0;
}
