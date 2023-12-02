#include <iostream>
#include <vector>
#include <string>

// This one's correct, but too slow and I don't know how to speed it up

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> islands(n);
    std::string out;

    for (int i = 0; i < n; i++) std::cin >> islands[i];
    for (int i = 0; i < q; i++) {
        int l, r, x;
        std::cin >> l >> r >> x;
        l--;
        r--;

        bool isIsland = false;
        int c = 0;
        for (int j = l; j <= r; j++) {
            if ((islands[j]) > x) isIsland = true;
            else if (isIsland) {
                c++;
                isIsland = false;
            }
        }
        if (isIsland) c++;
        out += std::to_string(c);
        out += '\n';
    }

    std::cout << out;
}
