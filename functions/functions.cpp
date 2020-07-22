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

//function for print power
//makes printing the power DRY
void print_power(double base, int exponent)
{
  int pow = power(base, exponent);
  cout << base <<" raised to the " << exponent << " power is " << power(base,exponent)<< endl;
}

int main()
{
  double base;
  int exponent;
  cout<< "What is the base? ";
  cin >> base;
  cout << "What is the Exponent? ";
  cin >> exponent;
  print_power(base,exponent);

  return 0;
}