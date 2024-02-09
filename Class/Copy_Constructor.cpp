#include <iostream>

using namespace std;

class car
{
private:
    int cost;
public: 
    int wheel;
    /*Constructor*/
    car(){}
    
    car(const car& c)
    {
    }
};
int main(){
    car tesla;
    car mazda;
    tesla.wheel = 50;
    mazda = tesla;
    cout << mazda.wheel << endl;

    return 0;
}