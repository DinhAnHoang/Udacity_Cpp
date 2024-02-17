/* idea: Xây dựng một cây kế thừa. gồm các bước:
1. Define a class Animal.
2. Define 3 member variables: color, name, age.
3. Define a derived class Snake that inherits from the base class Animal.
4. Create a member variable length for the Snake class.
5. Create a derived class Cat that inherits from the base class Animal.
6. Create a member variable height for the Cat class.
7. Create MakeSound() member functions for each of the derived classes.
8. In the main() function instantiate Snake and Cat objects. Initialize 
   both their unique and derived attributes. Program them to make a sound.
*/
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
// Define base class Animal
class Animal{
    private:

    public:
    string color {"Blue"};
    string name {"abc"};
    int age {11};
    Animal(): age(50) {}
};
/* Declare derived class Snake  */
class Snake : public Animal{
    public:
    int length{10};
    void MakeSound(){
        cout << " Ziiiiiiiiiii" << endl;
        cout << "name:" << Animal::name << " color:" << Animal::color << " Age:" << Animal::age << " Length:" << length << endl;
    }
};

/* Declare derived class Cat  */
class Cat : public Animal{
    public:
    int height {20};
    void MakeSound(){
        cout << " Meoooo Meooo" << endl;
    }
};
/* Declare derived class Dog  */
class Dog{
    public:
    Dog(): Animals(20,Animal()){}
    std::vector <Animal> Animals;
};



// Test in main()
int main(){
    Snake snake;
    snake.age = 10;
    snake.color = "Green";
    snake.length = 20;
    snake.name = "Be_Na";
    snake.MakeSound();

    return 0;
}