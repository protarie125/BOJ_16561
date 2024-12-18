#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  ll ans = 0;
  for (auto i = 3; i <= n; i += 3) {
    for (auto j = 3; j <= n; j += 3) {
      const auto& k = n - i - j;
      if (k >= 3) {
        ++ans;
      }
    }
  }

  cout << ans;

  return 0;
}