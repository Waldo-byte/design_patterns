// Lifetime of the object it creates can be both
// aggregation or composition in relation

#ifndef BASEFACTORY
#define BASEFACTORY

#include "BaseInterface.hpp"
#include <cstdio>

// Composotition will hanlde object lifetime strictly
class ComposedShapeDrawer{
  // public attributes
public:
  // Constructors etc.
  ComposedShapeDrawer() {};
  virtual ~ComposedShapeDrawer() {};

  // public Operations (create geometric shape)
  virtual BaseShape *CreateShape() {
    return new BaseShape{};
  };

  virtual void CreateAndHandle() {
    printf("Created!\n");
    BaseShape *shape = CreateShape();
    printf("Time to draw\n");
    HandleShape(shape);
    printf("Done\n");
  };

  // private Operations and attributes
protected:
  virtual void HandleShape(BaseShape *_shape) {
    _shape->drawShape();
  };
};

// class AggregatesShapeDrawer {
//   // public attributes
// public:
//   // Constructors etc.
//   AggregatesShapeDrawer() = delete;
//   AggregatesShapeDrawer(AggregatesShapeDrawer &_A) = delete;
//
//   AggregatesShapeDrawer(BaseShape * _baseShape) {
//     // Don't care if it's null we can create it
//     m_Shape = _baseShape;
//   };
//
//   virtual ~AggregatesShapeDrawer() {};
//
//   // public Operations (create geometric shape)
//   virtual BaseShape CreateShape();
//
//   // private Operations and attributes
// private:
//   virtual void HandleShape() {};
//   BaseShape * m_Shape;
// };
#endif // !BASEFACTORY
