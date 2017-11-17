#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

  string line;
  int charc;
  int linec;

  ifstream myfile ("pepe.txt");
    charc =0;
    linec = 0;
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      linec++;
      charc+= line.length();
    }
    cout<<"The number of characters in your file is "<<charc<<"."<< endl;
    cout<<"The number of lines in your file is "<<linec<<"."<< endl;
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
