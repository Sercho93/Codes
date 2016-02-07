#include <iostream>

int superpower (int a, int b)
{
  int cont=0, acum=0, c;

  do {
    cont = cont + 1;
    c = a*a;
    acum = c;
    return acum;
  } while(cont != b);
}
  int main()
  {
    int a, b, c, acum;
    std::cout << "Introduce the base number:" << std::endl;
    std::cin >> a;
    std::cout << "Introduce the potential number:" << std::endl;
    std::cin >> b;
    c = superpower (a, b);
    std::cout << "The answer is: " << acum << std::endl;
  }
