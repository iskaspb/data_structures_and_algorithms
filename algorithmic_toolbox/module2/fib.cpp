#include <iostream>

#define TEST 0

int fib(int n) {
  if (n <= 1)
    return n;
  int prev[] = {0, 1};
#if TEST
  std::cout << prev[0] << '\n' << prev[1] << '\n';
#endif // TEST

  for (int i = 2; i <= n; ++i) {
    const int newFib = prev[0] + prev[1];
    prev[0] = prev[1];
    prev[1] = newFib;
#if TEST
    std::cout << newFib << '\n';
#endif // TEST
  }
#if TEST
  std::cout << '\n';
#endif // TEST
  return prev[1];
}

int main() {
#if TEST
  int n = 10;
#else
  int n = 0;
  std::cin >> n;
#endif // TEST

  std::cout << fib(n) << '\n';
  return 0;
}
