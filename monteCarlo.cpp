#include <iostream>
#include <string>

#include "generate.hpp"
#include "trials.hpp"
#include "outcomeSelect.hpp"

int main()
{

    std::cout << "Hello" << std::endl;

    int trials = genTrials();

    int goodOutcome = outcome();

    double trialsOutcome = monteCarlo(goodOutcome, trials);

    std::cout << "After running for: " << trials << " Trials" << std::endl;

    std::cout << "The percentage of desired outcomes was: " << trialsOutcome * 100 << "%" << std::endl;

    return 0;
}