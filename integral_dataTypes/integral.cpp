#include <iostream>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  //there are 8 data types

  //include both +ve & -ve values
  //short <= int <= long <= long long
  short a;
  int b;
  long c;
  long long d;

  //just +ve coz it has no sign
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  //use sizeof() to check byte that can be stored
  cout << sizeof(a) << endl;
  cout << sizeof(b) << endl;
  cout << sizeof(c) << endl;
  cout << sizeof(d) << endl;
  cout << sizeof(aa) << endl;
  cout << sizeof(bb) << endl;
  cout << sizeof(cc) << endl;
  cout << sizeof(dd) << endl;

  //use datatype_max or datatype_min (i.e SHRT_MAX) to check upper and lower
  //number limits
  cout << SHRT_MAX << endl;
  cout << SHRT_MIN << endl;
  cout << INT_MAX << endl;
  cout << LONG_MAX << endl;
  cout << ULLONG_MAX << endl;
  return 0;
}