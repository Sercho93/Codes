#include <iostream>

int main()
{
  int num, cel;
  std::cout << "Este programa nos ayudará a hacer la conversión de grados Fahrenheit a grados Celsius" << std::endl;
  std::cout << "Ingresa los grados Fahrenheit:" << std::endl;
  std::cin >> num;
  cel = (5*(num - 32)) / 9;
  std::cout << "La temperatura en grados Celsisus es " << cel << "°" << std::endl;
  if (cel >= 100) {
    std::cout << "El agua hierve a esta temperatura" << std::endl;
  }
  else
  {
    std::cout << "El agua no hierve a esta temperatura" << std::endl;
  }
  return 0;
}
