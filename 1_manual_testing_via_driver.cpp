#include <iostream>
#include "fizzbuzz.hpp"

int main()
{
  int userInput;

  std::cout << "Enter a number!" << std::endl;
  std::cin >> userInput;
  std::cout << "Fizzbuzz of " << userInput << " equals " << fizzbuzz(userInput) << std::endl;

  return 0;
}
