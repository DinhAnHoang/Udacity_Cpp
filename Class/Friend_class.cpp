#include <iostream>
#include <map>
 
 /*Idea: bài này sẽ tạo một class car, class tax_region sẽ là friend của class car
  * Trong class tax region sẽ truy cập vào private member của class car để tính toán 
  * tiền thuế cho từng loại xe dựa trên giá sản xuất.
  * */


using namespace std;

class car{
  public:
    string color;
    int wheel;
    int base;
    car(int cost_temp, int base_temp,int wheel_temp){
        base = base_temp;
        wheel = wheel_temp;
        cost = base * wheel;
    }
    void print_cost(){
        cout <<cost<<endl;
    }
    friend class region_tax;
  private:
    int cost;
    int revenue;
};

class region_tax{
    public:
        region_tax(int l_tax_base){
            tax_base = l_tax_base;
        }
        int tax(car& f_car){
            return f_car.cost * tax_base;
        }
    private:
     int tax_base;
        
};


int main (){
    int a;
    car tesla(200,400,4);
    region_tax vietnam(2);
    a = vietnam.tax(tesla);
    cout << a <<endl;
    return 0;
}