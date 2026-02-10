// Lifetime of the object it creates can be both
// aggregation or composition in relation

#ifndef BASEFACTORY
#define BASEFACTORY
#endif // !BASEFACTORY

#include "BaseInterface.hpp"

// Composotition will hanlde object lifetime strictly
class ComposedShapeDrawer{
  // Constructors etc.
  ComposedShapeDrawer();
  virtual ~ComposedShapeDrawer();

  // public Operations (create geometric shape)
  virtual BaseShape CreateShape();

  // public attributes
public:

  // private Operations and attributes
private:
  virtual void HandleShape();
};

class AggregatesShapeDrawer {
  // Constructors etc.
  AggregatesShapeDrawer() = delete;
  AggregatesShapeDrawer(AggregatesShapeDrawer &_A) = delete;

  AggregatesShapeDrawer(BaseShape * _baseShape) {
    // Don't care if it's null we can create it
    m_Shape = _baseShape;
  };

  virtual ~AggregatesShapeDrawer();

  // public Operations (create geometric shape)
  virtual BaseShape CreateShape();

  // public attributes
public:

  // private Operations and attributes
private:
  virtual void HandleShape();
  BaseShape * m_Shape;
};
