#ifndef _CLASSIC_RECURSION_HH

#define _CLASSIC_RECURSION_HH

#include "fibonacci.hh"

namespace fib_alg {

class ClassicRecursion: public Fibonacci {
public:
    ClassicRecursion() = default;
    unsigned long long operator()(const unsigned long long n);
};

}

#endif