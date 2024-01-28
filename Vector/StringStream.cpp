#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main (){
    string a = "1 2 3";
    int count = 0;
    istringstream p1(a);

    while(p1)
    {
        p1 >> count;
        if(p1)
        {
            cout << count << endl;
        }
        else{
            cout << "Stream was not success" << endl;
        }
    }


/* passer all number value from string to integer array*/
    string b = "1,2,3,";
    istringstream p2(b);
    int i;
    char c;
    count = 0;
    vector<int> p2_Buffer(3); /*Must to define size befor using p2_Buffer[x] and we only access to size bellow size define*/
    
    while (p2 >> i >> c)
    {
        p2_Buffer[count] = i;
        count ++;
    }
    count = 0;
    cout << "\n=======================" << endl;
    for(auto i = p2_Buffer.begin(); i!= p2_Buffer.end(); i ++)
    {
        cout << *i << endl;
    }

/* passer all number value from string to integer array using push_back*/
    vector<int> p3_Buffer;
    i,c = 0;
    istringstream p3(b);
     cout << "\n=======================" << endl;
    while (p3 >> i >> c)
    {
        p3_Buffer.push_back(i);
    }
    for(auto i = p3_Buffer.begin(); i!= p3_Buffer.end(); i ++)
    {
        cout << *i << endl;
    }
    return 0;
}