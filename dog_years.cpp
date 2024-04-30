// Program which converts a dog's age into an equivalent human age. This version is for dogs older than 2 yeareese old.

#include <iostream>

int main() 
{
  int dog_age = 2;

  int early_years;
  int later_years;
  int human_years;
  
  // The first 2 years of a dog's life counts as 21 human years

  early_years = 21;

  // Each year after the first 2 years counts as 4 human years

  later_years = (dog_age - 2) * 4;

  human_years = early_years + later_years;

  std::cout << "My name is EJ! Ruff I am " << human_years << " old in human years.\n";
}
