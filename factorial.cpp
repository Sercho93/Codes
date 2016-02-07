#include <iostream>

int main ()
{
  int factor, factorial, contador=1, acumulador=1,producto=1;
  char resp;

  do {
    contador = 1;
    acumulador = 1;
    producto = 1;
    std::cout << "Ingresa un número entero positivo:" << std::endl;
    std::cin >> factor;
    do {
      producto = producto * (acumulador + 1);
      acumulador = acumulador + 1;
      factorial = producto;
      contador = contador + 1;
    } while(contador != factor);

    std::cout << "El factorial es: " << factorial << std::endl;
    std::cout << "¿Deseas volver a introducir otro número? S/N" << std::endl;
    std::cin >> resp;

  } while(resp == 's');

  return 0;
}
