#include "argparser.h"

// public section

ArgumentParser::ArgumentParser(int argc, char** argv)
    : m_Options(argc - 1)
{
    if (argc <= 2)
    {
        m_showUsage();
        std::exit(0);
    }
    // 
    for (size_t i = 1; i < argc; ++i)
    {
        m_Options[i - 1] = std::string(argv[i]);
    }
}

ArgumentParser::OptionsList_t& ArgumentParser::GetOptions()
{
    return m_Options;
}

// private section

void ArgumentParser::m_showUsage()
{
    std::stringstream ss;
    ss << "Usage: select [options list]\n"
       << "\tOptions can be single word (hello world) <- `hello` and `world` are opposite parameters\n"
       << "\tAlso, options can be strings (\"hello world\") <- `hello world` is a single parameter\n";
    std::cout << ss.str()
              << std::endl;
}
