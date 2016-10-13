#ifndef _Iteration_HH

#define _Iteration_HH

#include "fibonacci.hh"

namespace fib_alg {

class Iteration: public Fibonacci {
public:
    Iteration() = default;
    unsigned long long operator()(const unsigned long long n);
};

}

#endif