#include <iostream>

int gcd(int min, int max)
{
  int residuo;
  do {
    residuo = max % min;
    max=min;
    if (residuo != 0)
    {
      min = residuo;
    }
  } while(residuo != 0);
  return min;
}

int main()
{
  int max, min, resp;
  std::cout << "Este programa calculará el máximo común divisor dependiendo de los números que ingreses." << std::endl;
  std::cout << "Ingresa el número de mayor tamaño:" << std::endl;
  std::cin >> max;
  std::cout << "Ingresa el número de menor tamaño:" << std::endl;
  std::cin >> min;
  resp = gcd(min, max);
  std::cout << "La respuesta es: " << resp << std::endl;
}
