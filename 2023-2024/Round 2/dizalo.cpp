#include <iostream>
#include <unordered_set>

// This one doesn't want to cooperate

int main() {
    int n, q;
    std::cin >> n >> q;
    std::unordered_set<int> visited;

    int res = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        if (x < i) res += x - i;
        res++;
        visited.insert(x);
    }

    for (int i = 0; i < q; i++) {
        int x;
        std::cin >> x;
    }

    std::cout << res << std::endl;
}
