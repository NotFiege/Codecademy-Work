#include <iostream>

int main()
{

  int choice1, choice2, choice3;

  std::cout << "\nJohnny's Scary Adventure\n\n";
  std::cout << "Johnny is sitting at home watching TV. He hears a noise outside of his apartment's front door. What does Johnny do?\n\n";
  std::cout << "1) Check the front door\n";
  std::cout << "2) Ignore it\n";
  std::cout << "3) Go to his bedroom and close the door\n\n";
  std::cout << "Choose: ";

  std::cin >> choice1;

// Scenario 1 (Checks the front door)

  if (choice1 == 1)
  {
    std::cout << "\n\nJohnny slowly gets up from the couch and tip toes toward the front door. He holds his breath and gently presses his hear on the door. It is silent outside and there is nothing to be heard. Should Johnny check the peep hole?\n\n";
    std::cout << "1) Yes\n";
    std::cout << "2) No\n\n";
    std::cout << "Choose: ";

    std::cin >> choice2;

    if (choice2 == 1) // Checks peep hole
    {
      std::cout << "\n\nJohnny takes a small breath and looks into the peep hole. The barrel of a silenced pistol is aimed at the peep hole, and the assailant fires.\n\n";
      std::cout << "Game Over.\n";
    }

    else if (choice2 == 2) // Doesn't check peep hole
    {
      std::cout << "\n\nJohnny crouches away from the peep hole and makes their way toward the nearby kitchen. The front door's doornob jiggles as if somebody is checking for an easy entry. Johnny retreats behind a corner and waits for the wiggling to stop while calling 911 in the background on their phone. Moments later, the police arrive, and advise that a robber was in the area.\n\n";
      std::cout << "You win!\n";
    }

    else // Invalid entry
    {
      std::cout << "Invalid entry.\n";
    }
  }

// Scenario 2 (Ignores it)

  else if (choice1 == 2)
  {
    std::cout << "\n\nJohnny stays on the couch and ignores the noise. Moments later, Johnny sees the doornob jiggle. Johnny jumps off the couch in fear and runs toward the kitchen. Outside, Johnny can heard a pair of footsteps as if they were running away from the front door. Johnny calls 911 and the police arrive moments later. They advise that a robber was in the area.\n\n";
    std::cout << "You win!\n";
  }

// Scenario 3 (Hides in bedroom)

  else if (choice1 == 3)
  {
    std::cout << "\n\nJohnny tip toes toward his bedroom and closes the front door. Johnny places a chair up against the door to help secure it and proceeds to crouch behind their bed and out of view. Moments later, Johnny hears a crash as if somebody forced their way into the apartment. What does Johnny do?\n\n";
    std::cout << "1) Stay hidden by the bed\n";
    std::cout << "2) Hide in the closet\n\n";
    std::cout << "Choose: ";

    std::cin >> choice3;

    if (choice3 == 1)
    {
      std::cout << "\n\nJohnny remains hidden behind the bed and hears footsteps moving toward the bedroom door. Somebody attempts to get inside, but can't, thanks to the chair that Johnny placed. The person's footsteps can be heard leaving the apartment and Johnny calls 911. The police arrive and advise that a robber was in the area.\n\n";
      std::cout << "You win!\n";
    }

    else if (choice3 == 2)
    {
      std::cout << "\n\nJohnny gets up and moves toward the closet, when all of a sudden, the bedroom door is broken down and a hooded person is standing there with a raised arm. The hooded person fires the pistol, hitting Johnny.\n\n";
      std::cout << "Game Over.\n";
    }
  }

// Incorrect entry

  else 
  {
    std::cout << "\nInvalid entry. Please try again.\n";
  }

}
