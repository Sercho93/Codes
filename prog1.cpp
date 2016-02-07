#include <iostream>
using namespace std;

int main()
{
  float radio, altura, volumen;
  cout << "Este programa mostrará el volumen de un cilindro" << endl;
  cout << "Ingresa el radio" << endl;
  cin >> radio;
  cout << "Ingresa la altura" << endl;
  cin >> altura;
  volumen = (3.1416 * radio * radio) * altura;
  cout << "El volumen es: " << volumen <<endl;
  return 0;
}
