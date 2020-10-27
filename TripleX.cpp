#include <iostream>

void PrintIntroduction(int Difficulty)
{
  // Print welcome messages to the terminal
  std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room\n";
  std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

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
  std::cout << "+ There are 3 numbers in the code\n";
  std::cout << "+ The codes add-up to: " << CodeSum << "\n";
  std::cout << "+ The codes multiply to give: " << CodeProduct << "\n";

  // Store player guess
  int GuessA, GuessB, GuessC;
  std::cout << "Type in your guess: ";
  std::cin >> GuessA >> GuessB >> GuessC;

  const int GuessSum = GuessA + GuessB + GuessC;
  const int GuessProduct = GuessA * GuessB * GuessC;

  // Check if the player's guess is correct
  if (GuessSum == GuessProduct && GuessProduct == CodeProduct)
  {
    std::cout << "You win!\n";
    return true;
  }
  else
  {
    std::cout << "You lose!\n";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  while (true)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore();

    if (bLevelComplete)
    {
      // Increase the level difficulty
      ++LevelDifficulty;
    }
  }

  return 0;
}