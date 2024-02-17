#include <cassert>
#include <iostream>
// TODO: Declare Vehicle as the base class
enum type_Car{
    truck,
    sedanA,
    sedanB,
    sedanC
};

class Vehicle{
    public:
        type_Car type{sedanA};
        bool trunk{true};
        int seats{2};
        int wheels{2};
};
// TODO: Derive Car from Vehicle
class Car : public Vehicle{

};
// TODO: Derive Sedan from Car
class Sedan : public Car{

};
// TODO: Update main to pass the tests
int main() {
    Sedan sedan;
    sedan.type = sedanB;
    sedan.trunk = true;
    sedan.wheels = 4;
    sedan.seats = 4;

  assert(sedan.trunk == true);
  assert(sedan.seats == 4);
  assert(sedan.wheels == 4);
}