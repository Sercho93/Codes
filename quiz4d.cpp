#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double factorial (int n)
{
double x = 1;
for (int i = 1; i <= n; i++)
{
  x *= i;
}
return x;
}

double euler_calc (int precision)
{
  double e = 1.0;
  for (int i = 1; i < 999; i++)
  {
    e = e + 1/(factorial(i));
  }
  std::cout << setprecision (precision) << e;
  return e;
}

int main()
{
  int precision, e;
  std::cout << "Este programa calculará el número de euler con la precisión que desees." << std::endl;
  std::cout << "¿Cuántas cifras significativas deseas que tenga?" << std::endl;
  std::cin >> precision;
  e = euler_calc (precision);
  std::cout << " es el resultado."<< std::endl;
}
