// Program which asks the user for temperature in Fahrenheit and converts it to Celsius

#include <iostream>

int main() {

  // Declaring variables
  
  double tempf;
  double tempc;
  
  // Asking user for tempeerature in Fahrenheit  
  
  std::cout << "Enter the temperature in Fahrenheit: \n";
  std::cin >> tempf;

  // Converting temp from F to C
  
  tempc = (tempf - 32) / 1.8;

  // Output of temp conversion from F to C
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
