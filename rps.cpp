#include <iostream>
#include <cstdlib>

// Program which challenges the player to the computer in a game of Rock Paper Scissors

int main()
{

  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "=====================\n";
  std::cout << " ROCK PAPER SCISSORS \n";
  std::cout << "=====================\n\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n\n";

  std::cout << "Shoot: ";

  std::cin >> user;

  // Output of choice made

  if (user == 1)
  {
    std::cout << "\nYou chose ROCK.\n";
  }

  else if (user == 2)
  {
    std::cout << "\nYou chose PAPER.\n";
  }

  else if (user == 3)
  {
    std::cout << "\nYou chose SCISSORS.\n";
  }

  else
  {
    std::cout << "\nInvalid input.\n";
    return 1;
  }

  if (computer == 1)
  {
    std::cout << "Computer chose ROCK.\n\n";
  }

  else if (computer == 2)
  {
    std::cout << "Computer chose PAPER.\n\n";
  }
  
  else
  {
    std::cout << "Computer chose SCISSORS.\n\n";
  }

  // Winning condition check

  if (user == computer)
  {
    std::cout << "It's a tie!\n";
  }

  // User rock

  else if (user == 1)
  {
    if (computer == 2)
    {
      std::cout << "Computer wins!\n";
    }
    
    else if (computer == 3)
    {
      std::cout << "You win!";
    }
  }

  // User paper

  else if (user == 2)
  {
    if (computer == 1)
    {
      std::cout << "You win!\n";
    }
    
    else if (computer == 3)
    {
      std::cout << "Computer wins!\n";
    }
  }

  // User scissors

  else if (user == 3)
  {
    if (computer == 1)
    {
      std::cout << "Computer wins!\n";
    }

    else if (computer == 2)
    {
      std::cout << "You win!\n";
    }
  }

}
