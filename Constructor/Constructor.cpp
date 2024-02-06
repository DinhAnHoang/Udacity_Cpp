/*constructor: an operation that initializes (“constructs”) an object. 
 * Typically a constructor establishes an invariant and often acquires 
 * resources needed for an object to be used (which are then typically 
 * released by a destructor).
*/
#include <iostream>
#include <string>

using namespace std;

class car{
public:
    car(int wheel, int year,string name_car){
        set_price(wheel);
        set_product_year(year);
        set_name_car(name_car);
    }
    int get_price()
    {
       return price; 
    }
    void set_price(int wheel)
    {
        if(wheel == 6)
        {
            price = 600;
        }
        else if (wheel == 4)
        {
            price = 400; 
        }
    }
    int get_Product_year(){
        return product_year;
    }
    void set_product_year(int year){
        product_year = year;
    }
    void set_name_car(string name_car){
        name = name_car;
    }
    string get_name_car(){
        return name;
    }

private:
    string name{"Model 3"};
    int price{200};
    int product_year{2021};
};
int main(){
    car Tesla(4,1991, "Tesla");
    cout << "price: " << Tesla.get_price() << endl;
    cout << "product_year: " << Tesla.get_Product_year() << endl;
    cout << "Name car: " << Tesla.get_name_car() << endl;
}


