#include "raylib.h"  

const int           WINDOW_WIDTH  = 1280;
const int           WINDOW_HEIGHT = 720;
const char*         WINDOW_TITLE  = "Dungeon";

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Jalando", 310, 400, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}
    