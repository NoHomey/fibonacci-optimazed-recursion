#include "./optimized_recursion.hh"

fib_alg::OptimizedRecursion::OptimizedRecursion(): calculated({0, 1, 1}) {}

unsigned long long fib_alg::OptimizedRecursion::operator()(const unsigned long long n) {
    calculated.reserve(n);
    auto fib = calculated.size() > n ? calculated[n] : (operator()(n - 1) + operator()(n - 2));
    if(fib > calculated.back()) {
        calculated.push_back(fib);
    }
    
    return fib;
}