#include <iostream>
#include <string>
using namespace std;

struct car{
    public:
    string color {"no color"};
    int wheel_num {4};
    int weigh {1150};
    string type {"Truck"};
    void check_wheel_num(int wheel){
        if (wheel < 4)
        {
            type = "Tesla Model 3";
        }
        type = "Cybertruck";
    }
    private:
    int price{1000};
};

int main(){
    car Tesla;
    Tesla.color = "blue";
    Tesla.check_wheel_num(6);
    cout << "car of tesla: " << Tesla.color << endl;
    cout << "type model: " << Tesla.type << endl;

    return 0;

}