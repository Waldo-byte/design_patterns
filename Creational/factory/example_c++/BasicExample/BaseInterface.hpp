// Base interface for Shapes that will be able to be drawn
// can be purely virtual, does not have to be
#ifndef BASEINTERFACE
#define BASEINTERFACE
#endif // !BASEINTERFACE

#include <cstdio>
class BaseShape {
  // Constructor && Destructor
  BaseShape();
  virtual ~BaseShape();

  // Public operations
  // Function that will be used commonly
  virtual void drawShape() { printf("| Circle |\n"); };

  // Public attributes
public:


  // Private operations and attributes
private:



};
