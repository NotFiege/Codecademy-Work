#include <iostream>
#include <vector>

int main()
{

  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  int evens;
  int odds = 1;

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0) 
    {
      evens = evens + numbers[i];
    }

    else
    {
      odds = odds * numbers[i];
    }
  }

  std::cout << "Sum of evens " << evens << "\n"; // Codecademy shows 32777 as output, but online C++ debugger shows correct answer of 12, unclear as to why there is a difference
  std::cout << "Product of odds " << odds << "\n";

}
