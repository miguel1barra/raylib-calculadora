#include "include/raylib.h"
#include <math.h>

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {
  // Initialization
  //--------------------------------------------------------------------------------------
  const float screenWidth = 300;
  const float screenHeight = 435;


  InitWindow(screenWidth, screenHeight, "Calculadora");

  GameScreen currentScreen = LOGO;

  // TODO: Initialize variables here!

  SetTargetFPS(60); // Set desired framerate (frames-per-second)

  //--------------------------------------------------------------------------------------
  // Main game loop
  while (!WindowShouldClose()) // Detect window close button or ESC key
  {

    // Update
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    char str[20];

    // TODO: make this work
    /*for (int i=1; i < 4; i++) {
      DrawRectangle(10*i, 80*i, 60, 60, GRAY);
      DrawText(i, 40*i, 100*i, 20, BLACK);
    }*/

    /*const posX = 10;
    const posY = 80;*/

    DrawRectangle(0, 0, 300, 450, BLACK);
    DrawText("100000000", 40, 20, 40, WHITE);

    DrawRectangle(10, 80, 60, 60, BLUE);
    DrawText("1", 40, 100, 20, WHITE);

    DrawRectangle(80, 80, 60, 60, ORANGE);
    DrawText("2", 105, 100, 20, BLACK);

    DrawRectangle(150, 80, 60, 60, YELLOW);
    DrawText("3", 175, 100, 20, BLACK);

    DrawRectangle(10, 180, 60, 60, PINK);
    DrawText("4", 35, 200, 20, BLACK);

    DrawRectangle(80, 180, 60, 60, RED);
    DrawText("5", 105, 200, 20, BLACK);

    DrawRectangle(150, 180, 60, 60, BROWN);
    DrawText("6", 175, 200, 20, BLACK);

    DrawRectangle(10, 280, 60, 60, GRAY);
    DrawText("7", 35, 300, 20, PURPLE);

    DrawRectangle(80, 280, 60, 60, GRAY);
    DrawText("8", 105, 300, 20, GREEN);

    DrawRectangle(150, 280, 60, 60, GRAY);
    DrawText("9", 175, 300, 20, BLACK);

    DrawRectangle(10, 280, 60, 60, GRAY);
    DrawText("0", 35, 300 , 20, PURPLE);
    
    

    // Create + - * / = symbols

    ClearBackground(RAYWHITE);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------
  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}