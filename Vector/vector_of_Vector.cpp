#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    vector <vector<int>> board (0);

    board = 
    {{0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0}};

    for(int i =0; i< board.size();i++)
    {
        for(int j = 0; j< board[i].size();j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }


}