#include <iostream>

int suma (int x, int y)
{
  int a;
  a = x+y;
  return a;
}
int resta (int x, int y)
{
  int b;
  b = x-y;
  return b;
}
int producto (int x, int y)
{
  int c;
  c = x*y;
  return c;
}
int div (int x, int y)
{
  int d;
  d = x/y;
  return d;
}
int residuo (int x, int y)
{
  int e;
  e = x%y;
  return e;
}

int main()
{
  int x, y, a, b, c, d, e;
  std::cout << "Introduce el primer valor:" << std::endl;
  std::cin >> x;
  std::cout << "Introduce el segundo valor:" << std::endl;
  std::cin >> y;
  a = suma (x, y);
  b = resta (x, y);
  c = producto (x, y);
  d = div (x, y);
  e = residuo (x, y);
  std::cout << "Suma= " << a << std::endl;
  std::cout << "Resta= " << b << std::endl;
  std::cout << "Producto= " << c << std::endl;
  std::cout << "División= " << d << std::endl;
  std::cout << "Residuo= " << e << std::endl;
  return 0;
}
