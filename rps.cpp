// Program which asks a user to select Rock Paper Scissors, and compares choice to the computer, and informs who is the winner.

#include <iostream>
#include <stdlib.h>

int main()
{

  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "\n====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n\n";

  std::cout << "Enter your choice:\n\n";

  std::cin >> user;

  if (user == 1 && computer == 1)
  {
    std::cout << "Tie! Try again.\n";
  }

  else if (user == 2 && computer == 1)
  {
    std::cout << "You win!\n";
  }

  else if (user == 3 && computer == 1)
  {
    std::cout << "You lose.\n";
  }

  else if (user == 2 && computer == 1)
  {
    std::cout << "You win!\n";
  }
  
  else if (user == 2 && computer == 2)
  {
    std::cout << "Tie! Try again.\n";
  }

  else if (user == 2 && computer == 3)
  {
    std::cout << "You lose.\n";
  }

  else if (user == 3 && computer == 1)
  {
    std::cout << "You lose.\n";
  }

  else if (user == 3 && computer == 2)
  {
    std::cout << "You win!\n";
  }

  else if (user == 3 && computer == 3)
  {
    std::cout << "Tie! Try again.\n";
  }

}
