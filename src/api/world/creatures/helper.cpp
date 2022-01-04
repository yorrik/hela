#include "helper.h"
#include <raylib.h>

void hl::Creatures::Helper::moveCreature(int &deltaTime, Position &pos) {
  deltaTime += GetFrameTime();

  if (pos.nx == -1 && pos.ny == -1) return;

  // loop every 100ms
  if (deltaTime <= 0.1) {
    deltaTime = 0;

    pos.x += 0.2;
  }
}
