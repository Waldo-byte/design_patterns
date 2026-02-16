// Inherits from Base

#ifndef SQUAREINTERFACE
#define SQUAREINTERFACE

#include "BaseInterface.hpp"
#include <cstdio>

class SquareShape : public BaseShape {
public:
  // Constructor && Destructor
  SquareShape() {};
  ~SquareShape() override {};

  // Public Operations
  virtual void drawShape() override {printf("| Square |\n");};

  // Private Operations and attributes
private:
};
#endif // !SQUAREINTERFACE
