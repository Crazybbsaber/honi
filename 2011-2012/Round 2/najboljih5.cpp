// https://evaluator.hsin.hr/tasks/HONI111223najboljih5/

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

int main() {
	std::priority_queue<int, std::vector<int>, std::less<int>> pq;
	std::unordered_map<int, int> places;
	

	for (int i = 1; i <= 8; i++) {
		int x;
		std::cin >> x;

		pq.push(x);
		places[x] = i;
	}


	std::priority_queue<int, std::vector<int>, std::greater<int>> placement;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += pq.top();
		placement.push(places[pq.top()]);
		pq.pop();
	}
	
	std::cout << sum << '\n';

	for (int i = 0; i < 4; i++) {
		std::cout << placement.top() << ' ';
		placement.pop();
	}

	std::cout << placement.top() << '\n';
}