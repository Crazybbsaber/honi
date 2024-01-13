#include <iostream>
#include <vector>
#include <unordered_map>

// Don't work

int travel(int x, std::unordered_map<int, int>& map, std::vector<int>& sk_dist, std::vector<int>& sk_time, std::vector<int>& sk_desc, int n) {
	if (map.find(x) != map.end()) return map[x];
	int c = 0, s = 0, pos = x;
	for (int i = 0; i < n; i++) {
		if (sk_dist[i] < pos) continue;
		if (sk_time[i] > c) continue;

		c += sk_dist[i] - pos;
		pos = sk_dist[i];

		int skatetime = sk_time[i] - c;
		c += skatetime;
		s += skatetime;

		c += sk_desc[i];
	}
	map[x] = s;
	return map[x];
}

int main() {
	int n, m, c = 0;
	std::cin >> n >> m;

	std::vector<int> sk_dist(n), sk_time(n), sk_desc(n), days(m);
	std::unordered_map<int, int> map;
	
	for (int i = 0; i < n; i++) {
		std::cin >> sk_dist[i];
		std::cin >> sk_time[i];
		std::cin >> sk_desc[i];
	}

	for (int i = 0; i < m; i++) std::cin >> days[i];

	for (int i = 0; i < m; i++) {
		std::cout << travel(days[i], map, sk_dist, sk_time, sk_desc, n) << (i+1 == m? '\n' : ' ');
	}
}