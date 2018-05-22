#include <iostream>
#include <string>

using namespace std;

const char * escape = "\x1b";

namespace color {
    const std::string RESET = string(escape) + "[0m";
    const std::string RED   = string(escape) + "[31m";
    const std::string GREEN = string(escape) + "[32m";
}
int main() {
    std::cout << color::GREEN << "Hello, World!" << color::RESET << std::endl;
    std::cout << color::RED << "WARNING: Red alert!" << color::RESET << std::endl;

    return 0;
 }