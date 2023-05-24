#include <iostream>
#include <cstdlib>
#include <ctime>

void RPS(int);
int main()
{
    int ch1, de = 0, ch2;
    while (de == 0)
    {
        std::cout << "1.Play\n2.Exit\n";
        std::cin >> ch1;
        if (ch1 == 1)
        {
            std::cout << "1.Rock\t2.Paper\t3.Scissor\n";
            std::cin >> ch2;
            RPS(ch2);
            de = 0;
        }
        else if (ch1 == 2)
            de++;
        else
        {
            std::cout << "Invalid choice\n";
            de = 0;
        }
    }
    return 0;
}

void RPS(int ch)
{
    int num;
    std::srand(std::time(nullptr)); // Seed the random number generator
    num = std::rand() % 3 + 1;
    if (ch == 1 && num == 1)
    {
        std::cout << "Your choice: Rock\nComputer choice: Rock\nResult: TIE\n";
    }
    if (ch == 1 && num == 2)
    {
        std::cout << "Your choice: Rock\nComputer choice: Paper\nResult: LOSE\n";
    }
    if (ch == 1 && num == 3)
    {
        std::cout << "Your choice: Rock\nComputer choice: Scissor\nResult: WIN\n";
    }
    if (ch == 2 && num == 1)
    {
        std::cout << "Your choice: Paper\nComputer choice: Rock\nResult: WIN\n";
    }
    if (ch == 2 && num == 2)
    {
        std::cout << "Your choice: Paper\nComputer choice: Paper\nResult: TIE\n";
    }
    if (ch == 2 && num == 3)
    {
        std::cout << "Your choice: Paper\nComputer choice: Scissor\nResult: LOSE\n";
    }
    if (ch == 3 && num == 1)
    {
        std::cout << "Your choice: Scissor\nComputer choice: Rock\nResult: LOSE\n";
    }
    if (ch == 3 && num == 2)
    {
        std::cout << "Your choice: Scissor\nComputer choice: Paper\nResult: WIN\n";
    }
    if (ch == 3 && num == 3)
    {
        std::cout << "Your choice: Scissor\nComputer choice: Scissor\nResult: TIE\n";
    }
}
