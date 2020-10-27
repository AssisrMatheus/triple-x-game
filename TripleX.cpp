#include <iostream>

void PrintIntroduction(int Difficulty)
{
  // Print welcome messages to the terminal
  std::cout << "\nYou are a secret agent breaking into a level " << Difficulty << " secure server room\n";
  std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

  // Declare 3 number code
  const int CodeA = rand();
  const int CodeB = rand();
  const int CodeC = rand();

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
    std::cout << "\n*** Well done agent! You have extracted a file! Keep Going! ***\n";
    return true;
  }
  else
  {
    std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***\n";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  const int MaxDifficulty = 5;

  while (LevelDifficulty <= MaxDifficulty) // loop the game until all levels are complete
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();  // Clears any errors
    std::cin.ignore(); // Discards the buffer

    if (bLevelComplete)
    {
      // Increase the level difficulty
      ++LevelDifficulty;
    }
  }

  if (LevelDifficulty > MaxDifficulty)
  {
    std::cout << "*** Great work agent! You got all the files! Now get out of there! ***\n";
  }

  return 0;
}