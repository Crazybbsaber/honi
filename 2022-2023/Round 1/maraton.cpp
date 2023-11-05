#include <iostream>

int main() {
	long long x = 0;
	int n;
	std::cin >> n;

	for (int m = 0; m < n; m++) {
		long long addition;
		std::cin >> addition;
		x += addition;
	}

	std::cout << x << std::endl;
	std::cout << (x >= 42195? "DA" : "NE") << std::endl;
}