#include <iostream>
#include <vector>
#include <unordered_map>

// Don't work

int main() {
	int n, m;
	std::cin >> n >> m;

	std::vector<int> restaurant(m), icecream(m);

	for (int i = 0; i < m; i++) std::cin >> restaurant[i];
	for (int i = 0; i < m; i++) std::cin >> icecream[i];
	
	std::unordered_map<int, std::vector<int>> adj;

	for (int i = 1; i < n; i++) {
		int s, e;
		std::cin >> s >> e;
		adj[s].push_back(e);
	}
}