#include <iostream>
using namespace std;

int main()
{
  int num1, num2, producto, division, residuo;
  cout << "Ingresa un valor:" << endl;
  cin >> num1;
  cout << "Ingresa otro valor" << endl;
  cin >> num2;
  producto = num1 * num2;
  division = num1 / num2;
  residuo = num1 % num2;
  cout << "la multiplicación es: " << producto << endl;
  cout << "la division es: " << division << endl;
  cout << "el residuo es: " << residuo << endl;
  return 0;
}
