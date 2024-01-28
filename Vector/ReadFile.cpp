#include "Readfile.h"


int main(){
    vector<vector<State>> a;
    a = ReadBoardFile(path);
    print_vector2D(a);
    return 0;
}


vector<State> passer_line(string sLine){
    istringstream data_line(sLine);
    vector<State> Vec_paser_line;
    int num;
    char com;

    while (data_line >> num >> com && com == ',')
    {
      if(num == 0)
      {
        Vec_paser_line.push_back(State::kEmpty); 
      }
      else{
        Vec_paser_line.push_back(State::kObstacle);
      }
       
    }
    return Vec_paser_line;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> ParseLine_2D;

  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      ParseLine_2D.push_back(passer_line(line));
    }
  }
  return ParseLine_2D;
}

void print_vector2D(vector<vector<State>> vec){
  for(int i = 0; i<vec.size(); i++)
  {
    for(int j = 0; j< vec[i].size(); j++){
        cout << CellString(vec[i][j]);
    }
    cout << endl;
  }
}
void print_vector(vector<int> vec){
  for(int i = 0; i<vec.size(); i++)
  {
      cout << vec[i];
  }
}

string CellString(State cell){
    switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   "; 
  }
}