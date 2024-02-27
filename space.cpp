// Little Mac is a boxer who is trying to win championship belts across various weight categories on other planets in the solar system. Program will take in their weight on Earth, pick a planet to fight on, and compute their weight on the destination planet

#include <iostream>

int main() 
{

  // 3 variables to hold weight on Earth, destination planet, and weight on destination planet

  double earth_weight;
  double destination_weight;
  int planet;

  std::cout << "What is your weight on Earth in pounds (numbers only)?\n";
  std::cin >> earth_weight;
  
  std::cout << "Enter in the number of the planet to fight on:\n1. Mercury, 2. Venus, 3. Mars, 4. Jupiter, 5. Saturn, 6. Uranus, 7. Neptune\n";
  std::cin >> planet;
  
  // Computing Earth weight to destination planet weight. Relative gravity to Earth: Mercury 0.38, Venus, 0.91, Mars 0.38, Jupiter 2.34, Saturn 1.06, Uranus 0.92, Neptune 1.19

  if (planet == 1)
  {
    std::cout << "Your weight on Mercury is " << earth_weight * 0.38 << " pounds.\n";
  }

  else if (planet == 2)
  {
    std::cout << "Your weight on Venus is " << earth_weight * 0.91 << " pounds.\n";
  }

  else if (planet == 3)
  {
    std::cout << "Your weight on Mars is " << earth_weight * 0.38 << " pounds.\n";
  }

  else if (planet == 4)
  {
    std::cout << "Your weight on Jupiter is " << earth_weight * 2.34 << " pounds.\n";
  }

  else if (planet == 5)
  {
    std::cout << "Your weight on Saturn is " << earth_weight * 1.06 << " pounds.\n";
  }

  else if (planet == 6)
  {
    std::cout << "Your weight on Uranus is " << earth_weight * 0.92 << " pounds.\n";
  }

  else if (planet == 7)
  {
    std::cout << "Your weight on Neptune is " << earth_weight * 1.19 << " pounds.\n";
  }

  else
  {
    std::cout << "Restart the program and enter in a valid planet number.\n";
  }
  
}
