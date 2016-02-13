#include <iostream>
int fibonacci(int n)
{
  int r;
  if (n >= 2)
  {
    r = fibonacci(n-1) + fibonacci (n-2);
    return r;
  }
  else
  {
    if (n == 1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

int main()
{
  int n, resp;
  std::cout << "Este programa nos ayudará a encontrar el número FIBONACCI dependiendo del número que ingreses." << std::endl;
  std::cout << "Ingresa un número: " << std::endl;
  std::cin >> n;
  resp = fibonacci(n);
  std::cout << "La respuesta es: " << resp << std::endl;
  return 0;
}
