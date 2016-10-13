#include "./classic_recursion.hh"

unsigned long long fib_alg::ClassicRecursion::operator()(const unsigned long long n) {
    return n > 1 ? operator()(n - 1) + operator()(n - 2) : n;
}