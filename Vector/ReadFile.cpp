#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){

    ifstream myfile;
    string line;
    myfile.open("G:\\Studing Embedded\\Udacity_C++\\Udacity_Cpp\\Vector\\board.txt");
        if (myfile) {
        cout << "The file stream has been created!" << "\n";
    }    
    else{
        cout << "no file";
    }
    while(getline(myfile,line)){
      cout << line <<endl;
    }
    return 0;
}
