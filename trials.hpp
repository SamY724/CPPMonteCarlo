#include <iostream>
#include <random>

double monteCarlo(int goodOutcome, int trials)
{

    std::random_device rd;

    std::mt19937 rng(rd());

    std::uniform_int_distribution<int> uni(1, 6);

    int desiredOutcome = 0;

    int badOutcome = 0;

    for (int i = 1; i <= trials; i++)
    {

        int outcome = uni(rng) + uni(rng);

        if (outcome == goodOutcome)
        {
            desiredOutcome += 1;
        }
        else
        {
            badOutcome += 1;
        }
    };

    double results = static_cast<double>(desiredOutcome) / trials;

    return results;
}