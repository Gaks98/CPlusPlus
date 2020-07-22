#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  //char datatype is also considered an integral datatype 
  // coz u can convert a charater to a number
  // i.e 'A' = 65 and 'B' = 66 etc

  char letter = 'A';
  cout << (int) letter << endl; // 65
  return 0;
}