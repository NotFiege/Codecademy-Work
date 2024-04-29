// Program which takes in a temperature and converts it from Fahrenheit to Celsius

#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  
  std::cout << "Enter the current temperature in Fahrenheit: \n";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
