#ifndef TRYPARSE_H_INCLUDED
#define TRYPARSE_H_INCLUDED

#include <string>
#include <sstream>

bool tryParse(std::string str, int &num) {
    if (std::istringstream(str) >> num) {
        return true;
    }
    
    return false;
}

#endif // TRYPARSE_H_INCLUDED
