#include <iostream>

int main() {
	int x;
	std::cin >> x;

	std::cout << x % 10 << '\n';
	x /= 10;

	std::cout << x % 10 * 10 << '\n';
	x /= 10;
	
	std::cout << x % 10 * 100 << '\n';
}