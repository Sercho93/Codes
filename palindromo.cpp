#include <iostream>
using namespace std;
string is_palindrom(string w)
{
  if (w == string(w.rbegin(), w.rend()))
  {
    std::cout << "Sí es palíndromo." << std::endl;
  }
  else
  {
    std::cout << "No es palíndromo." << std::endl;
  }
}

int main()
{
  string w, s;
  std::cout << "Este programa te mostrará si la palabra que insertes es palíndromo." << std::endl;
  std::cout << "Inserta una palabra:" << std::endl;
  std::cin >> w;
  s = palindromo(w);
  std::cout << s << std::endl;
  return 0;
}
