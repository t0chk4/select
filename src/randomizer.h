#pragma once

#include <random>
#include <vector>
#include <string>

class Randomizer
{

    using OptionsList_t = std::vector<std::string>;

public:

    Randomizer() = default;

    std::string& GetRandomOption(OptionsList_t& options);

private:

};