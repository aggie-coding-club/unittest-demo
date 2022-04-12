#include <cmath>
#include <stdexcept>

int add(int a, int b) {
    // oops!
    return a - b;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        // oops!
        return n;
    }
}

double checked_sqrt(double n) {
    if (n < 0) {
        throw std::domain_error{"can't take the square root of a negative number"};
    }
    return std::sqrt(n);
}
