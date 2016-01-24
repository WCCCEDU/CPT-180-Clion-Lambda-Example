#include <iostream>
#include <string>

#include "./main.h"

/**************************************************
 * This demonstrates how to define a lambda expression
 * and then use it as an argument for an iterable proess
 * this requires min C++11 to supply the auto keyword
 * auto allows for the lambda express to have a valid type
 * since the lambda does not have a expressible real type
 * in the system
 *
 * the lambda passed in as an argument will be called in each
 * iteration of std::transform on line 32 it is aliased as the
 * variable `trans`
 */

// Lambda that can be used trivially to uppercase a character
auto ucase = [](char a) -> char { return toupper(a); };

int main() {
    std::string message = "happy pants";

    std::cout << "Before Transform: " << message << std::endl;
    std::string transformed = transform_str(message, ucase);
    std::cout << "After Transform: " << transformed << std::endl;
    return 0;
}

std::string transform_str(std::string str, char (*trans)(char)) {
    std::transform(str.begin(), str.end(), str.begin(), trans);
    return str;
}
