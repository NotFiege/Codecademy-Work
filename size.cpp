#include <iostream>
#include <vector>

int main() 
{
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  
  grocery.push_back("Pellets");
  grocery.push_back("Bell Pepper");

  std::cout << grocery.size() << "\n";
  
}
