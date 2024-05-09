// Text adventure in which the user is given a storyline to navigate through. Gives the user at least two choices and accepts user input.

#include <iostream>

int main ()
{

    std::cout << "KIKO'S GREAT ADVENTURE\n\n";
    std::cout << "Kiko the bunny has just woken up and is ready to start her day. Help her decide what to do next.\n\n";
    std::cout << "1) Stretch and eat some hay\n";
    std::cout << "2) Jump out of her enclosure and get some exercise by running around\n";
    std::cout << "3) Flop to your side and sleep in a little longer\n\n";

    int answer;
    int scenario1;
    int scenario2;
    int scenario3;

    std::cin >> answer;

    if (answer == 1)
    {
      std::cout << "\nKiko runs a small lap in her enclosure and then jumps into her hay box. She stuffs her small nose into the hay pile and picks out the best piece to munch.\n\n";
      std::cout << "After Kiko is full, she is ready for something new. Does she exercise or get more sleep?\n\n";
      std::cout << "1) Exercise\n";
      std::cout << "2) Sleep\n\n";

      std::cin >> scenario1; // Entry of scenario 1
        
        if (scenario1 == 1)
        {
          std::cout << "\nKiko braces herself and prepares for a big jump. A moment later, she uses her strong back legs to jump out of her enclosure and lands softly. Then, she prances around her owner's home.\n\n";
        }
        else if (scenario1 == 2)
        {
          std::cout << "\nKiko flops to her side and naps in the sunlight.\n\n";
        }

        else
        {
          std::cout << "\nPlease enter a valid number.\n\n";
        }
    }
    
    else if (answer == 2)
    {
      std::cout << "\nKiko braces herself and prepares for a big jump. A moment later, she uses her strong back legs to jump out of her enclosure and lands softly. Then, she prances around her owner's home.\n\n";
      std::cout << "After a good run, Kiko is ready for something new. Does she eat some hay or get some sleep?\n\n";
      std::cout << "1) Eat\n";
      std::cout << "2) Sleep\n\n";

      std::cin >> scenario2; // Entry of scenario 2

        if (scenario2 == 1)
        {
          std::cout << "\nKiko braces for another big jump and hops back into her enclosure. She stuffs her small nose into the hay pile and picks out the best piece to munch.\n\n";
        }

        else if (scenario2 == 2)
        {
          std::cout << "\nKiko gets comfortable under the counch and falls asleep.\n\n";
        }

        else
        {
          std::cout << "\nPlease enter a valid number.\n\n";
        }
    }

    else if (answer == 3)
    {
      std::cout << "\nKiko decides today is a late start and falls back asleep on her side.\n\n";
      std::cout << "A while later, she wakes up and is ready for something new. Does she eat or get some exercise?\n\n";
      std::cout << "1) Eat\n";
      std::cout << "2) Exercise\n\n";

      std::cin >> scenario3; // Entry of scenario 3

        if (scenario3 == 1)
        {
          std::cout << "\nKiko runs a small lap in her enclosure and then jumps into her hay box. She stuffs her small nose into the hay pile and picks out the best piece to munch.\n\n";
        }

        else if (scenario3 == 2)
        {
          std::cout << "\nKiko braces herself and prepares for a big jump. A moment later, she uses her strong back legs to jump out of her enclosure and lands softly. Then, she prances around her owner's home.\n\n";
        }

        else
        {
          std::cout << "\nPlease enter a valid number.\n\n";
        }
    }

    else
    {
      std::cout << "\nPlease enter a valid number.\n\n";
    }

    std::cout << "== Kiko had a great day today! Bye bye. ==\n\n";

} // End of program
