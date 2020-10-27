#include <iostream>

int main()
{
  // Print welcome messages to the terminal
  std::cout << "You are a secret agent breaking into a secure server room";
  std::cout << std::endl;
  std::cout << "Enter the correct code to continue...";

  // Declare 3 number code
  const int CodeA = 5;
  const int CodeB = 10;
  const int CodeC = 20;

  /*
    Declare the sum and the product
    of our variables
  */
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print sum and product to the terminal
  std::cout << std::endl
            << std::endl;
  std::cout << "+ There are 3 numbers in the code" << std::endl;
  std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
  std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cout << "Type in your guess: ";
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  const int GuessSum = GuessA + GuessB + GuessC;
  const int GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == GuessProduct && GuessProduct == CodeProduct)
  {
    std::cout << "You win!" << std::endl;
  }
  else
  {
    std::cout << "You lose!" << std::endl;
  }

  return 0;
}