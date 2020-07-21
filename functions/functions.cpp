#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//custom power method
double power(double base, int exponent)
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    //using result to continually increase the base value until
    //it calculates the final result
    //depending on the exponent value
    result = result * base;
  }
  
  return result;
}

int main()
{
  int base, exponent;
  cout<< "What is the base? ";
  cin >> base;
  cout << "What is the Exponent? ";
  cin >> exponent;
  int pow = power(base, exponent);
  cout << pow << endl;

  return 0;
}