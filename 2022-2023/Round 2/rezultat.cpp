// https://evaluator.hsin.hr/tasks/HONI222322rezultat/

#include <iostream>

int main() {
	int x, y, n;
	std::cin >> x >> y >> n;

	int d = 0, p = 0, min = 90;
	int raz = x - y;

	for (int i = 0; i < n; i++) {
		int s, t;
		std::cin >> s >> t;
		if (min == 90) {
			if (s == 1) d++;
			else p++;
			if ((d - p) >= raz && (d - y) > raz) min = t;
		}
	}

	if ((n == 0 && y < x) || x < y) std::cout << 0 << '\n' << 0 << '\n' << 0 << std::endl;
	else std::cout << min << '\n' << d << '\n' << p << std::endl;
}