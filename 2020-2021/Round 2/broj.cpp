#include <iostream>

int main() {
	int x, y, a;
	std::cin >> x >> y >> a;
	if (a % x) std::cout << "NE" << '\n';
	else if (a % y) std::cout << "NE" << '\n';
	else std::cout << "DA" << '\n';
}