#include <iostream>

int main() 
{
  
  int pesos;
  int reais;
  int soles;
  int dollars;

  std::cout << "Enter number of Columbian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;

  dollars = (pesos*0.00026) + (reais*0.20) + (soles*0.26);

  std::cout << "US Dollars = $" << dollars << "\n";

}
