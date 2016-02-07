#include <iostream>
using namespace std;

int main()
{
  float num1, num2, suma, resta, mult, div;
  cout << "Ingresa un número:" << endl;
  cin >> num1;
  cout << "Ingresa otro número" << endl;
  cin >> num2;
  suma = num1 + num2;
  resta = num1 - num2;
  mult = num1 * num2;
  div = num1 / num2;
  cout << "la suma es: " << suma << endl;
  cout << "la resta es: " << resta << endl;
  cout << "la multiplicación es: " << mult << endl;
  cout << "la division es: " << div << endl;
  return 0;
}
