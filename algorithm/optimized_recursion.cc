#include "./optimized_recursion.hh"
#include <iostream>

fib_alg::OptimizedRecursion::OptimizedRecursion(): calculated(2) {
    calculated[0] = 0;
    calculated[1] = 1;
}

unsigned long long fib_alg::OptimizedRecursion::operator()(const unsigned long long n) {
    calculated.reserve(n);
    const unsigned long long fib = calculated.size() < n ? operator()(n - 1) + operator()(n - 2) : calculated[n];
    if(fib > calculated.back()) {
        calculated.push_back(fib);
    }
    std::cout << "fib" << fib << std::endl;
    return fib;
}