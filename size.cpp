#include <iostream>
#include <vector>

int main() 
{
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  
  grocery.push_back("Peanut Butter");
  grocery.push_back("Basil");
  grocery.push_back("Eggs");
  grocery.push_back("Bread");

  std::cout << grocery.size() << "\n";
}
