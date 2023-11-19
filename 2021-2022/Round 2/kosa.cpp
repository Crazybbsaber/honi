// https://evaluator.hsin.hr/tasks/HONI212222kosa/

#include <iostream>

int main() {
	int n, m, a, x, b, y;
	std::cin >> n >> m >> a >> x >> b >> y;

	int days = 0;
	while (!(n > m)) {
		days++;
		if (!(days % a) && !(days % b)) n += 2*(x+y);
		else if (!(days % a)) n += x;
		else if (!(days % b)) n += y;
	}

	std::cout << days << std::endl;
}