// Inherits from the BaseInterface

#ifndef TRIANGLEINTERFACE
#define TRIANGLEINTERFACE

#include "BaseInterface.hpp"
#include <cstdio>

class TriangleShape : public BaseShape {
public:
  // Constructor && Destructor
  TriangleShape() {};
  ~TriangleShape() override {};

  // Public operations
  virtual void drawShape() override { printf("| Triangle |\n"); };

private:
};
#endif // !TRIANGLEINTERFACE
