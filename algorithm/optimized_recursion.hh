#ifndef _OPTIMIZED_RECURSION_HH

#define _OPTIMIZED_RECURSION_HH

#include <vector>
#include "./fibonacci.hh"

namespace fib_alg {
    class OptimizedRecursion: public Fibonacci {
    protected:
        std::vector<unsigned long long> calculated;
    public:
        OptimizedRecursion();
        unsigned long long operator()(const unsigned long long n);
    };
}

#endif