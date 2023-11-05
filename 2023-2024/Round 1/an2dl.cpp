#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int n, m;
    std::cin >> n;
    std::cin >> m;
    std::vector<std::vector<int> > matrix;

    for (int i = 0; i < n; i++) {
        std::vector<int> row;
        for (int j = 0; j < m; j++) {
            int x;
            std::cin >> x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }

    int r, s;
    std::cin >> r;
    std::cin >> s;

    if (r == n && s == m) {
        int hi = 0;
        for (std::vector<int> row : matrix) {
            int hirow = 0;
            for (int x : row) if (x > hirow) hirow = x;
            if (hirow > hi) hi = hirow;
        }
        std::cout << hi << std::endl;
    } else {
        for (int i = 0; i < n - r + 1; i++) {
            for (int j = 0; j < m - s + 1; j++) {
                int himat = -10001;
                for (int ni = 0; ni < r; ni++) {
                        std::vector<int>* crow = &matrix[i+ni];
                        for (int mi = 0; mi < s; mi++) {
                            int cval = (*crow)[j+mi];
                            if (cval > himat) himat = cval;
                        }
                }
                std::cout << himat;
                if (j != m - s) std::cout << ' ';
            }
            std::cout << std::endl;
        }
    }
}
