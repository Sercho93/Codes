#include <iostream>
#include <cmath>
float distance (float x1, float y1, float x2, float y2)
{
  float dist;
  dist = sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return dist;
}

int main()
{

  float x1, y1, x2, y2, dist;
  std::cout << "Este programa te ayudará a calcular la distancia entre dos puntos en un plana cartesiano" << std::endl;
  std::cout << "Ingresa x1 y y1:" << std::endl;
  std::cin >> x1 >> y1;
  std::cout << "Ahora ingresa x2 y y2;" << std::endl;
  std::cin >> x2 >> y2;

  dist = distance (x1, y1, x2, y2);

  std::cout << "La distancia entre estos dos puntos es de: " << dist << std::endl;

}
