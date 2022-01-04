
// forward declared entity
// properties for readability
struct Size;
struct Position;

namespace hl {
  namespace Creatures {
    namespace Helper {

      void moveCreature(int &deltaTime, Position &pos);
    }
  } // namespace Creatures
} // namespace hl

struct Size {
    double height, width = 0;
};

struct Position {
    // current position
    double x, y = 0;

    // position entity wants to go to
    double nx, ny = 0;
};