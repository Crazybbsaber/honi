#include <iostream>

int main() {
	int n, m, c = 0;
	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x;
		std::cin >> x;
		c += x / 4;
	}

	std::cout << ((n > c)? "NE" : "DA") << '\n';
}