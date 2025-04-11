#include "calculator.h"
#include <stdexcept>
#include <limits>

int Calculator::add(int a, int b) {
    // TODO
    int result = a + b;
    if (a > 0 && b > 0 && result < 0) {
        throw std::overflow_error("integer overflow in addition");
    }
    if (a < 0 && b < 0 && result > 0) {
        throw std::overflow_error("integer underflow in addition");
    }
    return result;
}

int Calculator::sub(int a, int b) {
    // TODO
    int result = a - b;
    if (a > 0 && b < 0 && result < 0) {
        throw std::overflow_error("integer overflow in subtraction");
    }
    if (a < 0 && b > 0 && result > 0) {
        throw std::overflow_error("integer underflow in subtraction");
    }
    return result;
}

int Calculator::mul(int a, int b) {
    // TODO
    int result = a * b;
    if (a != 0 && result/a != b) {
        if ((a > 0) == (b > 0)) {
            throw std::overflow_error("integer overflow in multiplication");
        }
        else {
            throw std::overflow_error("integer underflow in multiplication");
        }
    }
    return result;
}

int Calculator::div(int a, int b) {
    // TODO
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    int result = a / b;
    if (a == -2147483648 && b == -1) {
        throw std::overflow_error("integer overflow in division");
    }
    return result;
}