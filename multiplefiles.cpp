// Main file

#include <iostream>
#include <cmath>

// Add declarations here:

double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main() 
{
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}

// Function file

#include <iostream>
#include <cmath>

// Add definitions here:

double average(double num1, double num2) 
{
  return (num1 + num2) / 2;
}

int tenth_power(int num) 
{
  return pow(num, 10);
}

bool is_palindrome(std::string text) 
{
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) 
  {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) 
  {
    return true;
  }
  
  return false;
}
