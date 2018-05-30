//--------------------------------------------------
//AppName: FizzBuzz
//Creator: Damian de Ugarte
//Date Creation: 05/28/18
//--------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
  int count = 1;
  
  for(count = 1; count <= 100; count++) 
  {
    if (count%3 == 0 && count%5 == 0)
      cout << "fizzbuzz" << endl;
    if (count%3 == 0)
      cout << "fizz" << endl;
    if (count%5 == 0)
      cout << "buzz" << endl;
    else
      cout << count << endl;
  }
  
  return 0;
}
