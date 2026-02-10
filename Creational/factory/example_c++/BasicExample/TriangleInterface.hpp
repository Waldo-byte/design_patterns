// Inherits from the BaseInterface

#ifndef TRIANGLEINTERFACE
#define TRIANGLEINTERFACE
#endif // !TRIANGLEINTERFACE

#include "BaseInterface.hpp"
#include <cstdio>

class TriangleShape : BaseShape {
  // Constructor && Destructor
  TriangleShape();
  ~TriangleShape();

  // Public operations
  virtual void drawShape() override { printf("| Triangle |\n"); };

public:


private:
};
