#include <iostream>

// Define needs_water() here:

std::string needs_water(int days, bool is_succulent)
{

  std::string watering;

  if (is_succulent == false && days > 3)
  {
    std::cout << "Time to water the plant.\n";
  }

  else if (is_succulent == true && days <= 12)
  {
    std::cout << "Don't water the plant!.\n";
  }

  else if (is_succulent == true && days >= 13)
  {
    std::cout << "Go ahehad and give the plant a little water.\n";
  }

  else
  {
    watering = "Don't water the plant.\n";
  }

  return watering;
}


int main() 
{
  
  std::cout << needs_water(10, false) << "\n";
  
}
