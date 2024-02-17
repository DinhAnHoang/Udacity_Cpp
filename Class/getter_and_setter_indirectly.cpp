#include <iostream>
#include <string>
/* Idea: xây dựng một lớp dữ liệu gồm account number, name user và avaiable fund. 
 * Sử dụng các hàm setter và getter để thay đổi và lấy dữ liệu 
 */

class BankAccount
{
  private:
      // TODO: declare member variables
    int acc_num;
    std::string name;
    int avai_fund;
  public:
      // TODO: declare setters
    void set_acc_num (int _acc_num);
    void set_name (std::string _name);
    void set_avai_fund(int _avai_fund);
      // TODO: declare getters
      int get_acc_num();
      std::string get_name();
      int get_avai_fund();
};

// TODO: implement setters
void BankAccount:: set_acc_num (int _acc_num){
    this->acc_num = _acc_num;
}
void BankAccount::set_name (std::string _name){
    this->name = _name;
}
void BankAccount::set_avai_fund (int _avai_fund){
    this->avai_fund = _avai_fund;
}

// TODO: implement getters
int BankAccount::get_acc_num(){return acc_num;}
std::string BankAccount::get_name(){return name;}
int BankAccount::get_avai_fund(){return avai_fund;}

int main(){
    // TODO: instantiate and output a bank account
    BankAccount persion_1;
    
    persion_1.set_acc_num(1111);
    persion_1.set_name("HoangDinhAn");
    persion_1.set_avai_fund(40000);
    
    std::cout<< persion_1.get_acc_num() << std::endl;
    std::cout<< persion_1.get_name() << std::endl;
    std::cout<< persion_1.get_avai_fund() << std::endl;
}