#include <raylib.h>
#include <string>

int runGraphics()
{

    int width = 1280;
    int height = 720;
    std::string windowName = "My Raylib Game!";

    std::string textDrawn = "Hello Raylib!";
    int posX = 50;
    int posY = 50;
    int fontSize = 50;
    Color backGroundColor = DARKGRAY;

    InitWindow(width, height, windowName.c_str());

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(textDrawn.c_str(), posX, posY, fontSize, backGroundColor);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}