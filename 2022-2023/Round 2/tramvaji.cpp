// https://evaluator.hsin.hr/tasks/HONI222323tramvaji/

#include <vector>
#include <iostream>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> trains(n);
	trains[0] = 0;

	for (int i = 1; i < n; i++) {
		std::string type;
		std::cin >> type;

		if (type == "Patrik") std::cin >> trains[i];
		else {
			int line;
			std::cin >> line;

			std::cin >> trains[i];
			trains[i] += trains[line-1];
		}
	}

	int min = (int)1e9+1;
	std::pair<int, int> lines;

	for (int i = 1; i < n; i++) {
		int length = trains[i] - trains[i-1];
		if (length < min) {
			min = length;
			lines = {i, i+1};
		}
	}

	std::cout << min  << ' ' << lines.first << ' ' << lines.second << std::endl;
}