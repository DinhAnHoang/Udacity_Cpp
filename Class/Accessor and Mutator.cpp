#include <iostream>

using namespace std;

class Date {
 public:
  int Day() { return day_; }
  void Day(int d) {
    if (d >= 1 && d <= 31) {
        day_ = d;
    }
  }

 private:
  int day_{1};
  int month_{1};
  int year_{0};
};
int main(){


}