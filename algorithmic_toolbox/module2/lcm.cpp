#include <iostream>

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b) {
  const long long gcd = ::gcd(a, b);
  const long long a_over_gcd = a / gcd;
  return a_over_gcd * b;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
