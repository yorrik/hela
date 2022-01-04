#include "creatures.h"
#include "helper.h"

#include <raylib.h>
#include <entt/entity/registry.hpp>

entt::registry reg;

void hl::Creatures::start() {
  for (int i = 0; i < 10; ++i) {
    float walkspeed;

    const auto entity = reg.create();
    reg.emplace<Size>(entity, 20, 20);
    reg.emplace<Position>(entity, 20, (i + 3) * 20);
    reg.emplace<Color>(entity, RED);
  }
}

void hl::Creatures::update() {
  static int deltaTime(0);
  auto group = reg.group<const Size, Position, const Color>();

  group.each([](const auto &size, auto &pos, const auto &color) {
    DrawRectangle(pos.x, pos.y, size.width, size.height, color);
    Helper::moveCreature(deltaTime, pos);
  });
}