#include <iostream>

int main()
{
  std::cout << "You are a secret agent breaking into a secure server room";
  std::cout << std::endl;
  std::cout << "Enter the correct code to continue...";

  int a = 5;
  int b = 10;
  int c = 20;

  int sum = a + b + c;
  int product = a * b * c;

  std::cout << std::endl;
  std::cout << sum << std::endl;
  std::cout << product;

  return 0;
}