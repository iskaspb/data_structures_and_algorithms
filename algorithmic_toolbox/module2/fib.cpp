#include <iostream>

int fib(int n)
{
    if (n <= 1)
        return n;
    int prev[] = { 0, 1 };

    for(int i = 2; i <= n; ++i)
    {
        const int newFib = prev[0] + prev[1];
        prev[0] = prev[1];
        prev[1] = newFib;
    }
    return prev[1];
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << fib(n) << '\n';
    return 0;
}
