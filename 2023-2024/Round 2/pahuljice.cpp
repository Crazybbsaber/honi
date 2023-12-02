#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> grid;
    std::vector<std::pair<int, int>> flakes;

    for (int i = 0; i < n; i++) {
        std::vector<char> row;
        for (int j = 0; j < m; j++) {
            char x;
            std::cin >> x;
            if (x == '+') flakes.push_back({i, j});
            row.push_back(x);
        }
        grid.push_back(row);
    }

    int res = 0;
    for (std::pair<int, int> flake : flakes) {
        int path = 0;
        while (true) {
            path++;

            int up = flake.first-path, down = flake.first+path, left = flake.second-path, right = flake.second+path;
            if (up == -1 || down == n || left == -1 || right == m) break;

            if (grid[up][flake.second] != '|' || grid[down][flake.second] != '|') break;
            if (grid[flake.first][right] != '-' || grid[flake.first][left] != '-') break;
            if (grid[up][right] != '/' || grid[down][left] != '/') break;
            if (grid[up][left] != 92 || grid[down][right] != 92) break;
        }
        path--;
        res = std::max(res, path);
    }

    std::cout << res << std::endl;
}
