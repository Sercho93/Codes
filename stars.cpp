#include <iostream>

int main()
{
  int stars, count;
  std::cout << "How many stars do you want?" << std::endl;
  std::cin >> stars;
  do {
    count = count + 1;
    std::cout << "*";
  } while(count != stars);
}
