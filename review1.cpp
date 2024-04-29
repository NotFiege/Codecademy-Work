// Program which takes distance in miles and outputs distance in kilometers

#include <iostream>

int main() 
{
  double distancem;
  double distancek;

  std::cout << "Please enter the distance in miles: \n";
  std::cin >> distancem;

  distancek = distancem * 1.6;

  std::cout << "The distance is " << distancek << " kilometers.\n";
}
