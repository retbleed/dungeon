
#include <string> 
#include <cstdio>

// RAYLIB
#include "raylib.h" 


// CONSTANTS
const int           WINDOW_WIDTH                = 1280;
const int           WINDOW_HEIGHT               = 720;
const std::string   VERSION                     = "1.0.0";
const std::string   WINDOW_TITLE                = "Dungeon [" + VERSION + "]";
const char*         WINDOW_TITLE_CSTR           = WINDOW_TITLE.c_str();
const int           FRAME_LIMIT                 = 60;
const Color         COLOR_PERFECT_ORANGE        = { 244, 140, 6, 255 };

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE_CSTR);
    SetTargetFPS(FRAME_LIMIT);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(COLOR_PERFECT_ORANGE);

        DrawText("Jalando", 310, 400, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();

    Font myFont = LoadFont("resources/Roboto-Regular.ttf");

    return 0;
}