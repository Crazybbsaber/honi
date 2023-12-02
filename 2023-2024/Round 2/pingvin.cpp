#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

// It's mostly correct, but it's got some edge cases it should sort out

std::unordered_set<int> visited;
int n, startpos[3], endpos[3];
std::vector<std::vector<std::vector<int>>> cloud;

int id(int x, int y, int z) {
    return ((x*n*n) + (y*n) + (z));
}

std::queue<std::pair<std::pair<int, int>, std::pair<int, int>>> q;

int bfs(int x, int y, int z, int dist) {
    if (x == -1 || x == n) return -1;
    if (y == -1 || y == n) return -1;
    if (z == -1 || z == n) return -1;
    int posid = id(x, y, z);
    if (visited.find(posid) != visited.end()) return -1;
    visited.insert(posid);

    if (x == endpos[0] && y == endpos[1] && z == endpos[2]) return dist;
    dist++;

    q.push({{x+1, y}, {z, dist}});
    q.push({{x, y+1}, {z, dist}});
    q.push({{x, y}, {z+1, dist}});

    q.push({{x-1, y}, {z, dist}});
    q.push({{x, y-1}, {z, dist}});
    q.push({{x, y}, {z-1, dist}});

    return -1;
}

int check() {
    q.push({{startpos[0], startpos[1]}, {startpos[2], 0}});
    while (!q.empty()) {
        std::pair<std::pair<int, int>, std::pair<int, int>> q1 = q.front();
        int bfsres = bfs(q1.first.first, q1.first.second, q1.second.first, q1.second.second);
        if (bfsres != -1) return bfsres;
        q.pop();
    }

    return -1;
}

int main() {
    std::cin >> n;
    std::cin >> startpos[0] >> startpos[1] >> startpos[2];
    startpos[0]--; startpos[1]--; startpos[2]--;
    std::cin >> endpos[0] >> endpos[1] >> endpos[2];
    endpos[0]--; endpos[1]--; endpos[2]--;

    for (int i = 0; i < n; i++) {
        std::vector<std::vector<int>> plain;
        for (int j = 0; j < n; j++) {
            std::vector<int> row(n);
            for (int x = 0; x < n; x++) {
                char x1;
                std::cin >> x1;
                row.push_back(x1 - '0');
            }
            plain.push_back(row);
        }
        cloud.push_back(plain);
    }

    int res = check();
    std::cout << res << '\n';
}
