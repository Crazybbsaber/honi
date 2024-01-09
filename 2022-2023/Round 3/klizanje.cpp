#include <iostream>

int main() {
	int n, m, c = 0;
	std::cin >> n >> m;
	n++;

	for (int i = 0; i < m; i++) {
		int x;
		std::cin >> x;
		if (x == n) c++;
	}

	std::cout << c << '\n';
}