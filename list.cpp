#include <iostream>
#include <cmath>

float total (float numero[], int totalNumeros)
{
float suma = 0.0;
for (int i = 0; i < totalNumeros; i++)
{
  suma += numero[i];
}
return suma;
}

float promedio (float numero[], int totalNumeros)
{
  float suma = 0.0, prom = 0.0;
  for (int i = 0; i < totalNumeros; i++)
  {
    suma += numero[i];
  }
  prom = suma / totalNumeros;
  return prom;
}

float deviacionStd (float numero[], int totalNumeros)
{
  float variacion = 0.0, suma = 0.0, prom = 0.0, deviacion = 0.0;

  for (int i = 0; i < totalNumeros; i++)
  {
    suma += numero[i];
  }
  prom = suma / totalNumeros;
  for (int i = 0; i < totalNumeros; i++)
  {
    variacion = variacion + pow((numero[i]-prom),2);
  }
  deviacion = sqrt(variacion / totalNumeros);
  return deviacion;
}

int main ()
{
  const int totalNumeros = 10;
  float x[totalNumeros];
  for (int i = 0; i < totalNumeros; i++)
  {
    std::cout << "Introduce un número: ";
    std::cin >> x[i];
  }
  float suma = total (x, 10);
  float prome = promedio (x, 10);
  float dev = deviacionStd (x, 10);

  std::cout << "La suma total de los números es: " << suma << std::endl;
  std::cout << "El promedio de los números es: " << prome << std::endl;
  std::cout << "La desviación estandar es: " << dev << std::endl;
}


aclaracionescomprastc.santander.com.mx
I16-0469943
