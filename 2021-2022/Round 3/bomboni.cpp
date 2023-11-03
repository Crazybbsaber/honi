#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::vector<int> t;
    std::vector<char> c;

    std::cin >> n;
    std::cin >> k;

    int weight = 0, peanutcounter = 0;
    bool locked = false;

    for (int m = 0; m < n; m++) {
        int ti;
        std::cin >> ti;
        if (!locked) weight += ti;

        char ci;
        std::cin >> ci;
        if (ci == 'K') {
            peanutcounter++;
            if (peanutcounter == k) locked = true;
        }
    }

    std::cout << weight << std::endl;
}