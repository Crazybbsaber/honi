#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

int main() {
	int n, c = 0;
	std::cin >> n;

	std::vector<int> start(n);
	std::unordered_map<int, int> startend;

	for (int i = 0; i < n; i++) {
		std::cin >> start[i];
	}

	for (int i = 0; i < n; i++) {
		std::cin >> startend[start[i]];
	}

	std::vector<int> mins(n, INT_MAX);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			if (mins[j] > startend[i]) {
				mins[j] = startend[i];
				break;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (mins[i] != INT_MAX) c++;
	}

	std::cout << c << '\n';
}