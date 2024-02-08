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
    car(int wheel, int year,string name_car);
    int get_price();
    void set_price(int wheel);
    int get_Product_year(){
        return product_year;
    }
    void set_product_year(int year);
    void set_name_car(string name_car){
        name = name_car;
    }
    string get_name_car();

private:
    string name{"Model 3"};
    int price{200};
    int product_year{2021};
};

/*  ---------------  Open Scope resolution -------------------- */

/* Open resolution for constructor fuctions */
car::car(int wheel, int year,string name_car){
        set_price(wheel);
        set_product_year(year);
        set_name_car(name_car);
}

string car::get_name_car(){
    return car::name;
}

int car::get_price(){
    return car::price; 
}

void car::set_price(int wheel)
{
    if(wheel == 6)
    {
        car::price = 600;
    }
    else if (wheel == 4)
    {
        car::price = 400; 
    }
}

void car::set_product_year(int year){
    car::product_year = year;
}
/* -------------------------------------------------------------- */
int main(){
    car Tesla(4,1991, "Tesla");
    cout << "price: " << Tesla.get_price() << endl;
    cout << "product_year: " << Tesla.get_Product_year() << endl;
    cout << "Name car: " << Tesla.get_name_car() << endl;
}


