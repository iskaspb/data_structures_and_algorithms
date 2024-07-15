#include <iostream>

long gcd(long a, long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  long a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
}
