#include <iostream>

int main() {
    int n, rantime = 0;
    std::cin >> n;
    for (int i = 1; i < n; i++) {
        int m, s;
        std::cin >> m >> s;
        rantime += (m*60)+s;
    }
    int m, s;
    std::cin >> m >> s;
    int fulltime = (m*60)+s;
    int diff = fulltime - rantime;
    std::cout << (diff / 60) << ' ' << (diff % 60) << std::endl;
}
