#include "world.h"
#include "creatures/creatures.h"

void hl::World::draw() { hl::Creatures::update(); }

void hl::World::logic() {}

void hl::World::start() { Creatures::start(); }