// Inherits from Base

#ifndef SQUAREINTERFACE
#define SQUAREINTERFACE
#endif // !SQUAREINTERFACE

#include "BaseInterface.hpp"
#include <cstdio>

class SquareShape : BaseShape {
  // Constructor && Destructor
  SquareShape();
  ~SquareShape();

  // Public Operations
  virtual void drawShape() override {printf("| Square |\n");};

  // Public attributes
public:

  // Private Operations and attributes
private:
};
