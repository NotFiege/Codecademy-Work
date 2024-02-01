// Program which calculates a dog's age (older than 2 years) into human years

#include <iostream>

int main() 
{
  
    // Declaring the dog's age in years

    int dog_age = 5;
  
    // Variables which account for different rate of aging

    int early_years;
    int later_years;
    int human_years;

    // The first 2 years of a dog count as 21 human years

    early_years = 21;

    // Every year after 2 years counts as 4 human years

    later_years = dog_age - 2 * 4;

    // Calculating age of dog in human years

    human_years = early_years + later_years;

    // Outputting statement and dog age in human years

    std::cout << "My name is EJ! I am " << human_years << " in human years.\n";

}
