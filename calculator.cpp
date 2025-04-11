#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    // TODO
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    return a-b;
}

int Calculator::mul(int a, int b) {
    long long result = 1LL * a * b; // promote to 64-bit
    if (result > INT_MAX || result < INT_MIN) {
        throw std::overflow_error("Multiplication result out of int range");
    }
    return static_cast<int>(result);
}


int Calculator::div(int a, int b) {
    // TODO
    return a/b;
}