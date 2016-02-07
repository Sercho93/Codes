#include <iostream>

int main ()
{
  int num, num2, acumulador=0;
  std::cout << "Este programa nos ayudará a calcular la suma que habrá en cierto rango de número que nos proporcionaras" << std::endl;
  std::cout << "Igresa el primer número:" << std::endl;
  std::cin >> num;
  std::cout << "Ingresa el segundo número:" << std::endl;
  std::cin >> num2;
  if (num<num2) {
    do {
      num = num + 1;
      acumulador = acumulador + num;
    } while(num != num2);
    acumulador= acumulador + 1;
    std::cout << "La suma obtenida es: " << acumulador << std::endl;
  }
  else
  {
  std::cout << "Por favor ingresa el primer número menor al segundo. Intentalo de nuevo." << std::endl;
  }
  return 0;
}
