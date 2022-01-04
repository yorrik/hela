#include "hela.h"
#include <raylib.h>

#include "world/world.h"

void draw() {
  BeginDrawing();
  ClearBackground(BLACK);

  hl::World::draw();

  EndDrawing();
}

void input() {}

void logic() { hl::World::logic(); }

void createWindow() {
  InitWindow(860, 640, "hela");
  SetTargetFPS(60);
}

void hl::run() {
  createWindow();
  World::init();

  while (!WindowShouldClose()) {
    draw();
    input();
    logic();
  }
}