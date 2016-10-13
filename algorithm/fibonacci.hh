#ifndef _FIBONACCI_HH

#define _FIBONACCI_HH

namespace fib_alg {

class Fibonacci {
public:
    Fibonacci() = default;
    virtual unsigned long long operator() (const unsigned long long n) = 0;
};

}

#endif