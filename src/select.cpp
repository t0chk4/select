#include "select.h"

int main(int argc, char** argv)
{
    ::ArgumentParser ap(argc, argv);
    std::vector<std::string>& options = ap.GetOptions();
    ::Randomizer rnd;
    std::cout << rnd.GetRandomOption(options)
              << std::endl;
}