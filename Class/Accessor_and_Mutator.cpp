#include <iostream>
#include <string>

using namespace std;

class car{
  public:
  string color;
  int wheel;
  int base;
  int cost_temp;
  void caculate(){
    cost_temp = base * wheel;
    cost = cost_temp;
  }
  void print_cost(){

    cout <<cost<<endl;
  }
  private:
  int cost;
  int revenue;
};


int main(){
 car tesla;

/*example public access*/
 tesla.color = "Blue";
 tesla.wheel = 4;
 cout << tesla.color << endl;
 cout << tesla.wheel << endl;

/*example private access*/
  car hundai;
  hundai.base = 400;
  hundai.wheel = 500;
  hundai.caculate();
  hundai.print_cost();

}
