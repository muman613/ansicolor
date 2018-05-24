#include <iostream>
#include <string>
#include "colordefs.h"

using namespace std;

int main() {
    cout << color::FG::GREEN << "Hello, World!" << color::RESET << endl;
    cout << color::FG::RED << "WARNING: Red alert!" << color::RESET << endl;
    cout << "And here is a " << color::blue("blue moon", true) <<
         " for you too!" <<  endl;
    cout << color::FG::BOLD_YELLOW << color::BG::BLUE <<
         "Here is some YELLOW on BLUE text..." << color::RESET << endl;
    return 0;
 }