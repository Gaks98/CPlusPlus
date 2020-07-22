#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// there are 3 ways of defining a constant
// 1). Macro:
#define X 10

int main(){
  
  // 2). const
  const int x = 5;

  // 3). enum
  enum {y = 100};

  
  return 0;
}