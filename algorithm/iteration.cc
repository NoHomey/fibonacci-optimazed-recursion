#include "./iteration.hh"

unsigned long long fib_alg::Iteration::operator()(const unsigned long long n) {
    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long next;
    for(unsigned long long i = 1; i < n; ++i) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}