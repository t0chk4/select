#pragma once

#include <vector>
#include <iostream>
#include <sstream>
#include <cstdlib> // std::exit

class ArgumentParser
{

    using OptionsList_t = std::vector<std::string>;

public:

    ArgumentParser(int argc, char** argv);

    OptionsList_t& GetOptions();

private:

    void m_showUsage();

private:

    OptionsList_t m_Options;
};
