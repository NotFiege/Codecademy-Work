#include <iostream>
#include <vector>

int main()
{

  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
 
  int evens = 0;
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

  std::cout << odds << "\n";
  std::cout << evens << "\n";

}
