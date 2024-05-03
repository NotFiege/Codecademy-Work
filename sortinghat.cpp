#include <iostream>

int main()
{

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "\nThe Sorting Hat Quiz!\n\n";    

// Question 1

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cin >> answer1;

  if (answer1 == 1)
  {
    hufflepuff++;
  }

  else if (answer1 == 2)
  {
    slytherin++;
  }
  
  else if (answer1 == 3)
  {
    ravenclaw++;
  }
  
  else if (answer1 == 4)
  {
    gryffindor++;
  }
  
  else
  {
    std::cout << "Invalid input.\n\n";
  }

// Question 2

  std::cout << "\nQ2) Dusk or Dawn?\n\n";
  std::cout << "  1) Dusk\n";
  std::cout << "  2) Dawn\n\n";

  std::cin >> answer2;

  if (answer2 == 1)
  {
    gryffindor++;
    ravenclaw++;
  }

  else if (answer2 == 2)
  {
    hufflepuff++;
    slytherin++;
  }
  
  else
  {
    std::cout << "Invalid input.\n\n";
  }

// Question 3

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cin >> answer3;

  if (answer3 == 1)
  {
    slytherin++;
  }

  else if (answer3 == 2)
  {
    hufflepuff++;
  }

  else if (answer3 == 3)
  {
    ravenclaw++;
  }

  else if (answer3 == 4)
  {
    gryffindor++;
  }

  else
  {
    std::cout << "Invalid input.\n\n";
  }

// Question 4

  std::cout << "\nQ4) Which road temps you most?\n\n";
  std::cout << "  1) The wide, sunny, grassy lane\n";
  std::cout << "  2) The narrow, dark, latern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";

  std::cin >> answer4;

  if (answer4 == 1)
  {
    hufflepuff++;
  }

  else if (answer4 == 2)
  {
    slytherin++;
  }

  else if (answer4 == 3)
  {
    gryffindor++;
  }

  else if (answer4 == 4)
  {
    ravenclaw++;
  }

  else
  {
    std::cout << "Invalid input.\n\n";
  }

// House calculations

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (slytherin > max)
  {
    max = slytherin > max;
    house = "Slytherin";
  }

  std::cout << "\n" << house << "!\n";

}
