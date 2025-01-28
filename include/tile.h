#ifndef TILE
#define TILE

#include "raylib.h"
#include "globals.h"

typedef struct Tile {
  Rectangle rect;
  Color colour;
  bool alive;
} Tile;

#endif // !TILE
