### 1) Interface
  - Create a Interface (pure virtual)
  - Concrete subclasses will be created from this interface

### 2) Creator
  - Create a `Creator` base class -> creates the Interface
  - Subclass the `Creator` class with concrete `Creator Classes`
  - Creates a object || returns a existing object

### 3) UML Representation

```mermaid
classDiagram
class Factory{
    -m_Object : Object
    +Operation1()
    +Operation2()
    +createObject() Object
}
class ConcreteObjectAFact {
    +createObject() Object
}
class ConcreteObjectBFact {
    +createObject() Object
}
class Object {
    +SomeFunctionality()
}
class ConcreteObjectA
class ConcreteObjectB

Factory <|-- ConcreteObjectAFact : Inherits
Factory <|-- ConcreteObjectBFact : Inherits

note for ConcreteObjectAFact "return ObjectA{}"
note for ConcreteObjectBFact "return ObjectB{}"

Factory *-- Object : composition
Factory o-- Object : aggregation

Object --|> ConcreteObjectA
Object --|> ConcreteObjectB

note for Factory "This creates the Object, but that is not the
only thing it does, this is refered to as the factory,
because all the functionality (handling the object) can also
be done in this class (Operation1, Operation2)"
```
