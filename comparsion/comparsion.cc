#include <iostream>
#include <chrono>
#include "./../algorithm/classic_recursion.hh"
#include "./../algorithm/iteration.hh"
#include "./../algorithm/optimized_recursion.hh"

int main() {
    const unsigned long long n = 44;
    std::chrono::time_point<std::chrono::steady_clock> start;
    fib_alg::ClassicRecursion classic_recursion;
    fib_alg::Iteration iteration;
    fib_alg::OptimizedRecursion optimized_recursion;
    std::cout << "Compartion of Iteration, Classic Recursion & Optimized Recursion algorithms for calculating the " << n << "th Fibonacci number:" << std::endl;
    start = std::chrono::steady_clock::now();
    classic_recursion(n);
    std::cout << "Classic recursion time: "
        << std::chrono::duration<double> (std::chrono::steady_clock::now() - start).count() << "s" << std::endl;
    start = std::chrono::steady_clock::now();
    iteration(n);
    std::cout << "Iteration time: "
        << std::chrono::duration<double> (std::chrono::steady_clock::now() - start).count() << "s" << std::endl;
    start = std::chrono::steady_clock::now();
    optimized_recursion(n);
    std::cout << "Optimized recursion time: "
        << std::chrono::duration<double> (std::chrono::steady_clock::now() - start).count() << "s" << std::endl;

    return 0;
}