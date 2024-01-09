#include <iostream>

int main() {
	int res = 0;
	for (int i = 'A'; i < 'Q'; i++) {
		char x;
		std::cin >> x;
		if (x == '.') continue;
		x -= i;
		x = std::abs(x);
		res += x / 4;
		res += x % 4;
	}

	std::cout << res << '\n';
}