#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;
	int max = x * 3;
	int dif = max - y;
	if (y <= max && y >= x && !(dif % 2)) std::cout << "ISTINA" << '\n';
	else std::cout << "LAZ" << '\n';
}