#include <iostream>

int main() 
{
  
  double earth_weight;
  double destination_planet;
  double converted_weight;

  std::cout << "Please enter in your weight on Earth in pounds (rounded): \n";
  std::cin >> earth_weight;

  std::cout << "Choose a destination planet by entering in the number: 1.) Mercury, 2.) Venus, 3.) Mars, 4.) Jupiter, 5.) Saturn, 6.) Uranus, 7.) Neptune: \n";
  std::cin >> destination_planet;
  
  if (destination_planet == 1)
  {
    converted_weight = earth_weight * 0.38;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Mercury.\n";
  }

  else if (destination_planet == 2)
  {
    converted_weight = earth_weight * 0.91;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Venus.\n";
  }

  else if (destination_planet == 3)
  {
    converted_weight = earth_weight * 0.38;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Mars.\n";
  }

  else if (destination_planet == 4)
  {
    converted_weight = earth_weight * 2.34;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Jupiter.\n";
  }

  else if (destination_planet == 5)
  {
    converted_weight = earth_weight * 1.06;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Saturn.\n";
  }

  else if (destination_planet == 6)
  {
    converted_weight = earth_weight * 0.92;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Uranus.\n";
  }

  else if (destination_planet == 7)
  {
    converted_weight = earth_weight * 1.19;
    std::cout << "Your Earth weight is " << converted_weight << " pounds on Neptune.\n";
  }

  else
  {
    std::cout << "Please restart the program and enter in a valid planet number entry.\n";
  }

}
