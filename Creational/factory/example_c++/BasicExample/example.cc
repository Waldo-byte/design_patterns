#include "BaseFactoryShapeDrawer.hpp"
#include "SquareFactoryShape.hpp"
#include "TriangleFactory.hpp"
#include <cstring>

int main(int argc, char *argv[]) {
  ComposedShapeDrawer *shapeDrawer;
  if (argc <= 1) {
    printf("Need at least one argument");
    return 1;
  }

  if (strcmp(argv[1], "--triangle") == 0) {
    shapeDrawer = new ComposedTriangleDrawer{};
  }
  if (strcmp(argv[1], "--square") == 0) {
    shapeDrawer = new ComposedSquareShapeDrawer{};
  }

  shapeDrawer->CreateAndHandle();
  delete shapeDrawer;
};

