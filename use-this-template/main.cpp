#include <iostream>
#include <raylib.h>

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int main () {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "wow so cool");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    
    CloseWindow();
}
