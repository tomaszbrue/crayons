#ifndef CRAYONS_HPP
#define CRAYONS_HPP

#include <ostream>

enum Code {
    FG_RED      = 31,
    FG_GREEN    = 32,
    FG_BLUE     = 34,
    FG_DEFAULT  = 39,
    BG_RED      = 41,
    BG_GREEN    = 42,
    BG_BLUE     = 44,
    BG_DEFAULT  = 49
};

class Crayons {
    Code code;
public:
    Crayons(Code pCode) : code(pCode) {}
    friend std::ostream&
    operator<<(std::ostream& os, const Crayons& mod) {
        return os << "\033[" << mod.code << "m";
    }
};

#endif