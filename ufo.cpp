#include <iostream>
#include "ufo_functions.hpp"

int main() 
{

  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________"; 

  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;

  char letter;

  while (answer != codeword && misses < 7)
  {
    display_misses(misses);

    display_status(incorrect, answer);

    std::cout << "\n\nPlease enter your guess: ";

    std::cin >> letter;

    for (int i = 0; i < codeword.size(); i++)
    {
      if (letter == codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess == true)
    {
      std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    }

    else
    {
      std::cout << "\nIncorrect. The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);

      misses++;
    }
  }

  end_game(answer, codeword);

}


// hpp

#include <vector>

void display_misses(int misses);
void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);

// cpp

#include <iostream>
#include <vector>

void greet()
{
  std::cout << "\n=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: Save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void end_game(std::string answer, std::string codeword)
{
  if (answer == codeword)
  {
    std::cout << "\nHooray! You saved the person and earned a medal of honor!\n";
  }

  else
  {
    std::cout << "\nOh no! The UFO just flew away with another person!\n";
  }
}

void display_status(std::vector<char> incorrect, std::string answer)
{
    std::cout << "\nIncorrect Guesses: ";

    for (int i = 0; i < incorrect.size(); i++)
    {
      std::cout << incorrect[i] << " ";
    }

    std::cout << "\nCodeword: ";

    for (int x = 0; x < answer.size(); x++)
    {
      std::cout << answer[x] << " ";
    }
}


void display_misses(int misses) 
{

  if (misses == 0 || misses == 1) 
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 2)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 3)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 3)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 4)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 5)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

  else if (misses == 6)
  {
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";
  }

}
