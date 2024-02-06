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

    /*Access to private member and get value of it */
    int check_price(int wheel){
        if (wheel < 4)
        {
            this->price = 100;
            return price;
        }
        this->price = 300;
        return price;
    }
    private:
    int price{1000};
};

int main(){
    car Tesla;
    Tesla.color = "blue";
    Tesla.check_wheel_num(6);
    Tesla.check_price(6);
    cout << "car of tesla: " << Tesla.color << endl;
    cout << "type model: " << Tesla.type << endl;
    cout << "Price:"  << Tesla.check_price(5) << endl;
    return 0;

}