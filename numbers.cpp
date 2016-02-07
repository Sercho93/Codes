#include <iostream>
using namespace std;
int main()
{
  int num1, num2, resta, producto, division, residuo;
  cout << "Este programa te será util para poder saber la resta, producto, división entera y residuo de dos números dados" << endl;
  cout << "Ingresa dos números:" << endl;
  cin >> num1 >> num2;

  resta = num1 - num2;
  producto = num1 * num2;
  division = num1 / num2;
  residuo = num1 % num2;

  cout << "Resta= " << resta << endl;
  cout << "Producto= " << producto << endl;
  cout << "División= " << division << endl;
  cout << "Residuo= " << residuo << endl;
  return 0;
}
