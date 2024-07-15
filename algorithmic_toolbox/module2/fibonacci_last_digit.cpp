#include <iostream>

int get_fibonacci_last_digit(int n) {
    if (n <= 1)
        return n;
    int prev[] = { 0, 1 };

    for(int i = 2; i <= n; ++i)
    {
        const int newFib = prev[0] + prev[1] ;
        prev[0] = prev[1];
        prev[1] = newFib % 10;
    }
    return prev[1];
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}
