#include <iostream>
#include <string>

using namespace std;


namespace color {
    const std::string   ESC         = string("\x1b");
    const std::string   RESET       = ESC + "[0m";
    namespace FG {
        const std::string BLACK     = ESC + "[30m";
        const std::string RED       = ESC + "[31m";
        const std::string GREEN     = ESC + "[32m";
        const std::string YELLOW    = ESC + "[33m";
        const std::string BLUE      = ESC + "[34m";
        const std::string MAGENTA   = ESC + "[35m";
        const std::string CYAN      = ESC + "[36m";
        const std::string WHITE     = ESC + "[37m";

        const std::string BOLD_BLACK    = ESC + "[90m";
        const std::string BOLD_RED      = ESC + "[91m";
        const std::string BOLD_GREEN    = ESC + "[92m";
        const std::string BOLD_YELLOW   = ESC + "[93m";
        const std::string BOLD_BLUE     = ESC + "[94m";
        const std::string BOLD_MAGENTA  = ESC + "[95m";
        const std::string BOLD_CYAN     = ESC + "[96m";
        const std::string BOLD_WHITE    = ESC + "[97m";
    }

    namespace BG {
        const std::string BLACK     = ESC + "[40m";
        const std::string RED       = ESC + "[41m";
        const std::string GREEN     = ESC + "[42m";
        const std::string YELLOW    = ESC + "[43m";
        const std::string BLUE      = ESC + "[44m";
        const std::string MAGENTA   = ESC + "[45m";
        const std::string CYAN      = ESC + "[46m";
        const std::string WHITE     = ESC + "[47m";

        const std::string BOLD_BLACK    = ESC + "[100m";
        const std::string BOLD_RED      = ESC + "[101m";
        const std::string BOLD_GREEN    = ESC + "[102m";
        const std::string BOLD_YELLOW   = ESC + "[103m";
        const std::string BOLD_BLUE     = ESC + "[104m";
        const std::string BOLD_MAGENTA  = ESC + "[105m";
        const std::string BOLD_CYAN     = ESC + "[106m";
        const std::string BOLD_WHITE    = ESC + "[107m";
    }

    std::string black(const std::string& msg, bool bold = false) {
        std::string result = ((bold) ? FG::BOLD_BLACK:FG::BLACK) + msg + RESET;
        return result;
    }
    std::string red(const std::string& msg, bool bold = false) {
        std::string result = ((bold) ? FG::BOLD_RED:FG::RED) + msg + RESET;
        return result;
    }
}

int main() {
    cout << color::FG::GREEN << "Hello, World!" << color::RESET << std::endl;
    cout << color::FG::BOLD_RED << "WARNING: Red alert!" << color::RESET << std::endl;
    cout << color::FG::RED << "WARNING: Red alert!" << color::RESET << std::endl;
    cout << color::FG::YELLOW << "Sunny days!" << color::RESET << std::endl;
    cout << color::FG::BLUE << "Blue Moon..." << color::RESET << endl;
    cout << color::FG::BOLD_BLUE << "Blue Moon..." << color::RESET << endl;
    cout << color::FG::MAGENTA << "Magnificent Magenta..." << color::RESET << endl;
    cout << color::FG::BOLD_YELLOW << color::BG::BLUE <<"Hello, World!" << color::RESET << std::endl;

    cout << color::red("This is some bold RED text!", true) << endl;
    return 0;
 }