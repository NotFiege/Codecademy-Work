#include <iostream>
#include <vector>
#include <string>

int main ()
{

  int x;
  int y;
  int i;

  std::string input = "turpentine and turtles";

  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (i = 0; i < input.size(); i++)
  {
    for (x = 0; x < vowels.size(); x++)
    {
      if (input[i] == vowels[x])
      {
        result.push_back(input[i]);

        if (input[i] == 'u' || input[i] == 'e')
        {
          result.push_back(input[i]);
        }
      }
    }
  }

  for (y = 0; y < result.size(); y++)
  {
    std::cout << result[y];
  }

}
