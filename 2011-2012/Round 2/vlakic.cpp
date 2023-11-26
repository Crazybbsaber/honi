// https://evaluator.hsin.hr/tasks/HONI111221vlakic/

#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;
	int group1 = (n / 2), group2 = (n / 2);
	if (n % 2) group1++;

	int train_visits = 0;

	train_visits += group1 / m;
	if (group1 % m) train_visits++;

	train_visits += group2 / m;
	if (group2 % m) train_visits++;

	std::cout << train_visits << '\n';
}