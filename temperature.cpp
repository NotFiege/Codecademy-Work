// Program which takes in a temperature and converts it from Fahrenheit to Celsius

#include <iostream>

int main() 
{
  double tempf = 73;
  double tempc;

  tempc = (tempf -32) / 1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
