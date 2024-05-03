#include <iostream>

int main() 
{
  
  int year;

  std::cout << "Please enter in a year: \n";
  std::cin >> year;

  if (year < 1000 || year > 9999)
  {
    std::cout << "Invalid year entry. Try again.\n";
  }
  
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    std::cout << year << " falls on a leap year.\n";
  }
  
  else
  {
    std::cout << year << " does not fall on a leap year.\n";
  }

}
