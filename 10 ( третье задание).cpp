#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 std::cin >> n;
 std::cout << ((n / 10 + n % 10) & 1 ? "Нечетная" : "Четная") << "\n";
 return 0;
}
