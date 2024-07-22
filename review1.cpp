// Program which converts a weight of an item and then calculcates how much that item would weigh on planet Mars

#include <iostream>

int main() 
{
  
  // Mars is 0.378 when compared to Earth gravity

  double weight_mars;
  double weight_earth;

  std::cout << "Please enter your Earth weight in pounds: ";
  std::cin >> weight_earth;

  weight_mars = weight_earth * 0.378;

  std::cout << "Your weight on Mars would be " << weight_mars << "\n";

}
