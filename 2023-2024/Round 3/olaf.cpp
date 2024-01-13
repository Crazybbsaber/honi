#include <iostream>

int main() {
	int n, dist, c = 0;
	std::cin >> n >> dist;
	int original_dist = dist;

	for (int i = 0; i < n; i++) {
		char x;
		int k;

		std::cin >> x >> k;
		c += k;

		if (x == 'L') dist -= k;
		else dist += k;
	}

	std::cout << (c + (std::abs(dist - original_dist))) << '\n';
}