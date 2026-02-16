#ifndef SQUARE_FACTORY
#define SQUARE_FACTORY

#include "BaseFactoryShapeDrawer.hpp"
#include "BaseInterface.hpp"
#include "SquareInterface.hpp"

class ComposedSquareShapeDrawer : public ComposedShapeDrawer {
public:
  ComposedSquareShapeDrawer() {};
  ~ComposedSquareShapeDrawer() override {};

  virtual BaseShape *CreateShape() override {
    return new SquareShape{};
  }

  virtual void CreateAndHandle() override {
    printf("Created Square!\n");
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
#endif // !SQUARE_FACTORY
