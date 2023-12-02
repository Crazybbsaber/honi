#include <iostream>
#include <vector>
#include <unordered_set>

// This solution is just a joke, but it actually got some test cases right 

int main() {
    int n;
    std::cin >> n;
    std::unordered_set<int> here;

    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (here.find(x) == here.end()) {
            res++;
            here.insert(x);
        }
    }
    int base = res / 2;
    int diff = res % 2;
    std::cout << (base + diff) << ':' << base << std::endl;
}
