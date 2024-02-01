#include <iostream>

int main() {

  // Declaring variable

  int tip = 0;
  
  // Asks user to enter in tip amount

  std::cout << "Enter tip amount: ";
  std::cin >> tip;
  
  // Outputs amount paid in dollars

  std::cout << "You paid " << tip << " dollars.\n";
  
}
