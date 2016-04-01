#include <iostream>
using namespace std;

int find_threes(int num[], int limite)
{
    int suma = 0;
    for(int i = 0; i < limite; i++)
    {
    if (num[i] % 3 == 0)
    {
          suma = suma + num[i];
    }
  }
    return suma;
}

int main(){
  int lim;
  cout << "¿Cuántos números deseas ingresar?" << std::endl;
  cin >> lim;
  int x[lim];
  for (int i = 0; i < lim; i++)
  {
    cout << "Ingresa un número: ";
    cin >> x[i];
  }
  int sum = find_threes(x,lim);
  cout << "La suma de los números que ingresaste es:  " << sum << endl;
}
