#ifndef TRIANGLE_FACTORY
#define TRIANGLE_FACTORY

#include "BaseFactoryShapeDrawer.hpp"
#include "BaseInterface.hpp"
#include "TriangleInterface.hpp"

class ComposedTriangleDrawer : public ComposedShapeDrawer {
public:
  ComposedTriangleDrawer() {};
  ~ComposedTriangleDrawer() override {};

  virtual BaseShape *CreateShape() override {
    return new TriangleShape{};
  }

  virtual void CreateAndHandle() override {
    printf("Created Triangle!\n");
    BaseShape *shape = this->CreateShape();
    printf("Time to draw\n");
    this->HandleShape(shape);
    printf("Done\n");
  }

private:
  virtual void HandleShape(BaseShape *_shape) override {
    _shape->drawShape();
  }

};
#endif // !TRIANGLE_FACTORY
