#include <iostream>

int superpower (int a, int b)
{
  int c=0, acum=1;
  do {
    c = c + 1;
    acum = acum * a;

  } while(c != b);
  return acum;
}
  int main()
  {

    int acum, a, b, d;
    a = 5;
    b= 5;
    acum = superpower (a, b);
    std::cout << "The result is: " << acum << std::endl;
  }
