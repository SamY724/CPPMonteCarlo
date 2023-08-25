#include <iostream>

int genTrials()
{
    int trials;

    std::cout << "Please enter the amount of trials: " << std::endl;

    std::cin >> trials;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Incorrect input of trials, please try again" << std::endl;
        return genTrials();
    }

    return trials;
}