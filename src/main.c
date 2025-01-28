#include "raylib.h"
#include "globals.h"
#include "tile.h"
#include "organism.h"

void initialize(Tile *organism) {
  
}

int main() {
  int const window_height = 640;
  int const window_width = 720;
  Tile *organisms = nullptr;
  initialize(organisms);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    EndDrawing();
  }
  return 0;
}

