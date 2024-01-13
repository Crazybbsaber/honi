#include <iostream>

int main() {
	int h, m;
	std::cin >> h >> m;

	std::cout << (h < 12? h+12 : h%12) << '\n' << m << '\n';
}