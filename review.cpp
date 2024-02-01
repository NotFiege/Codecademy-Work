// Program which asks a user to input a distance in miles, converts to kilometers, and outputs the answer

#include <iostream>

int main() 
{

  // Declare variables for miles and kilometer

  int miles;
  int kilometer;

  // Ask the user to input distance in miles

  std::cout << "Enter distance in miles: \n";
  std::cin >> miles;

  // Convert answer from miles to kilometers, formula miles*1.6=kilometer

  kilometer = miles*1.6;

  // Output converted answer

  std::cout << "The distance is " << kilometer << " kilometers\n";

}
