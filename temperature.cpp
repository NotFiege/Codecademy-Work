// Program which converts a given temperature from fahrenheit to celsius

#include <iostream>

int main() 
{
  
  // Declaring variables, tempf to hold temperature in fahrenheit and tempc for temperature in celsius

  double tempf = 44;
  double tempc;

  tempc = (tempf - 32) / 1.8; 

  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}
