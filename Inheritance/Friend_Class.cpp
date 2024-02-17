// Example solution for Rectangle and Square friend classes
// Define class Square as friend of Rectangle
    // Add public constructor to Square, initialize side
    // Add friend class Rectangle
    // Add private attribute side to Square

// Define class Rectangle
    // Add public declarations of the class constructor and Area() method
    // Add private attributes width, height

// Outside class Rectangle and using class scope of resolution (::)
    // Define a Rectangle constructor that takes a Square
    // Define Area() to compute area of Rectangle
#include <assert.h>
// Declare class Rectangle
class Rectangle;

class Square{
private:
    int side;
    friend class Rectangle;
public:
    Square(int side_):side(side_){}
};

class Rectangle{
private:
    int width, height;
public:
    Rectangle(const Square& a);
    int Area()const;
};

Rectangle::Rectangle(const Square& a): width(a.side), height(a.side){}

int Rectangle::Area() const {
    return width * height;
}
//  Update main() to pass the tests

int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}