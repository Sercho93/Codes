#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num, resp, veces=0;
  srand(time (NULL));
  num = rand()%101;

  std::cout << "Este programa  elegirá un número al azar del 1 al 100 y tu deberás encontrarlo de acuerdo a lo que te vaya diciendo." << std::endl;
  std::cout << "¿Estás listo para empezar?" << std::endl;


  do {
    veces = veces + 1;
    std::cout << "Teclea un número:" << std::endl;
    std::cin >> resp;
    if (resp > num) {
      std::cout << "¡Incorrecto! Tu número es mayor que el mío. Continua intentando." << std::endl;
    }
    else
    {
      if (resp < num) {
        std::cout << "¡Mal! Tu número es menor que el mío. Continua intentando." << std::endl;
      }
      else
      {
        std::cout << "¡¡¡Correcto!!! Ese es mi número." << std::endl;
      }

    }
  } while(resp != num);

std::cout << "La cantidad de veces que intentaste adivinar mi número fueron " << veces << std::endl;
if (veces <= 5) {
  std::cout << "ERES EXELENTE ADIVINANDO" << std::endl;
}
else {
  if (veces > 5 && veces < 10) {

    std::cout << "ERES BUENO ADIVINANDO" << std::endl;
  }
  else
  {
    std::cout << "SERIA BUENO QUE SIGAS PRACTICANDO" << std::endl;
  }
}
  return 0;
}
