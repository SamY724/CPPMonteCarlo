#include <iostream>

int outcome()
{

    int desiredOutcome;

    std::cout << "Please enter desired outcome from rolling 2 fair dice:" << std::endl;

    std::cin >> desiredOutcome;

    if (desiredOutcome < 2 || desiredOutcome > 12 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Wrong range, please input a number that can be obtained by two standard dice:" << std::endl;
        return outcome();
    }

    return desiredOutcome;
}