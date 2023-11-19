#include <iostream>
#include <string>

int main() {
	int n, m;
	std::cin >> n >> m;

	std::string k1, k2;
	std::cin >> k1 >> k2;

	int t;
	std::cin >> t;

	if (n >= t) {
		for (int i = n; i >= t; i--) std::cout << k1[i];
	} else {
		for (int i = t; i < m; i++) std::cout << k2[i];
	}
	for (int i = 0; i < t; i++) {
		if (i > (n - t) && i > m) {
			std::cout << ' ';
			continue;
		}
		std::cout << k2[i];
		if (i <= (n - t)) std::cout << k1[n - t - i];
	}
	if (t < m) {
		for (int i = t; i < m; i++) std::cout << k2[i];
	} else {
		for (int i = n; i >= t; i--) std::cout << k1[i];
	}

	std::cout << std::endl;
}