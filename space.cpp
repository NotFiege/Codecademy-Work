#include <iostream>

int main() 
{
  
  double earth_weight;
  double planet_weight;

  double destination_planet;

  std::cout << "Please enter in your weight in pounds on Earth: ";
  std::cin >> earth_weight;

  std::cout << "\n1) Mercury 2) Venus 3) Mars 4) Jupiter 5) Saturn 6) Uranus 7) Neptune\n\n";
  std::cout << "Enter the number of your destination planet: ";
  std::cin >> destination_planet;

  if (destination_planet == 1)
  {
    planet_weight = earth_weight * 0.38;
    std::cout << "Your weight on Mercury is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 2)
  {
    planet_weight = earth_weight * 0.91;
    std::cout << "Your weight on Venus is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 3)
  {
    planet_weight = earth_weight * 0.38;
    std::cout << "Your weight on Mars is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 4)
  {
    planet_weight = earth_weight * 2.34;
    std::cout << "Your weight on Jupiter is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 5)
  {
    planet_weight = earth_weight * 1.06;
    std::cout << "Your weight on Saturn is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 6)
  {
    planet_weight = earth_weight * 0.92;
    std::cout << "Your weight on Uranus is " << planet_weight << " pounds.\n";
  }

  else if (destination_planet == 2)
  {
    planet_weight = earth_weight * 0.91;
    std::cout << "Your weight on Venus is " << planet_weight << " pounds.\n";
  }

  else
  {
    std::cout << "Invalid input.\n";
  }

}
