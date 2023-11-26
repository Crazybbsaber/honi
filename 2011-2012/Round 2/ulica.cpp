// https://evaluator.hsin.hr/tasks/HONI111222ulica/

#include <iostream>

int main() {
	int m, s;
	std::cin >> m >> s;

	int trip = 0;
	int max = std::max(m, s);
	int min = std::min(m, s);

	if ((max % 2) ^ (min % 2)) {
		if (min % 2) max--;
		else min--;
		trip++;
	}

	trip += ((max - min) / 2);
	std::cout << trip << '\n';
}