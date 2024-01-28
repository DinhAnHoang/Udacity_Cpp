#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

enum class State {
  kEmpty,
  kObstacle
};

/* Description: passer all data in line and feedback correctly
 * Input : String of line
 * Output: 0 or 1 with data type State
*/
vector<State> passer_line(string sLine);

/* Description: print vector 2D with data type State
 * Input : Vector 2D
 * Output: none
*/
void print_vector2D(vector<vector<State>> vec);

/* Description: print vector 1D with data type int
 * Input : Vector 1D
 * Output: none
*/
void print_vector(vector<int> vec);

/* Description: Read file txt as input data
 * Input : Path of file
 * Output: Vector 2D
*/
vector<vector<State>> ReadBoardFile(string path); 

/* Description: check char and return string value
 * Input : 0 or 1 with State datatype
 * Output: String
*/
string CellString(State cell);
string path = "G:\\Studing Embedded\\Udacity_C++\\Udacity_Cpp\\Vector\\board.txt";