#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int MaxPairwiseProduct(const vector<int> &numbers) {
  int result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

long long MaxPairwiseProductFast(const vector<int> &numbers) {
  if (numbers.empty())
    return 0;
  if (numbers.size() == 1)
    return numbers[0];

  size_t maxi1 = 0, maxi2 = 1;
  if (numbers[maxi1] < numbers[maxi2])
    std::swap(maxi1, maxi2);

  for (int i = 2, n = numbers.size(); i < n; ++i) {
    int value = numbers[i];
    if (value <= numbers[maxi2])
      continue;

    if (value > numbers[maxi1]) {
      maxi2 = maxi1;
      maxi1 = i;
    } else {
      maxi2 = i;
    }
  }
  return (long long)(numbers[maxi1]) * numbers[maxi2];
}

void testRun() {
  vector<int> numbers = {100000, 90000};
  auto result = MaxPairwiseProductFast(numbers);
  cout << result << "\n";
}

void consoleRun() {
  int n;
  cin >> n;
  vector<int> numbers(n);
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  auto result = MaxPairwiseProductFast(numbers);
  cout << result << "\n";
}

int main() {
  // testRun();
  consoleRun();
  return 0;
}
