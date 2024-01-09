#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int elvessum = 0;
	std::vector<int> elves(9);

	for (int i = 0; i < 9; i++) {
		std::cin >> elves[i];
		elvessum += elves[i];
	}

	int dif = elvessum - 100;
	std::pair<int, int> badelves;
	for (int elf : elves) {
		int elfdif = dif - elf;
		if (std::find(elves.begin(), elves.end(), elfdif) != elves.end()) {
			badelves = {elf, elfdif};
			break;
		}
	}

	for (int elf : elves) {
		if (elf == badelves.first || elf == badelves.second) continue;
		std::cout << elf << '\n';
	}
}