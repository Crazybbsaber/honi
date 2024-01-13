#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::unordered_map<int, int> president, unsortedboard, board;
	std::vector<int> sortboard, sortscores;

	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		president[x] = n-i;
	}

	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;

		unsortedboard[x] = i+1;
		sortboard.push_back(x);
	}

	std::sort(sortboard.begin(), sortboard.end(), std::greater<int>());
	for (int i = 0; i < n; i++) {
		board[unsortedboard[sortboard[i]]] = n-i;
	}

	std::unordered_map<int, std::pair<int, int>> scores; // Score, (initial number, initial sum) 

	for (int i = 1; i <= n; i++) {
		int sum = president[i]+board[i];
		int score = sum*201+board[i];
		scores[score] = {i, sum};
		sortscores.push_back(score);
	}

	std::sort(sortscores.begin(), sortscores.end(), std::greater<int>());

	for (int i = 0; i < n; i++) {
		std::pair<int, int> stuff = scores[sortscores[i]];
		std::cout << i+1 << ". Kod";

		if (stuff.first/10) std::cout << stuff.first;
		else std::cout << '0' << stuff.first;
		
		std::cout << " (" << stuff.second << ")\n";
	}
}