#include "randomizer.h"

std::string&
Randomizer::GetRandomOption(
    Randomizer::OptionsList_t& options)
{
    size_t index;
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> dist(0, options.size() - 1);
    
    index = dist(generator);

    return options[index];
}