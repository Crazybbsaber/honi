#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> numbers; // Vector to store all the individual numbers

	for (int n = 0; n < 10; n++) {
		int x;
		std::cin >> x;
		x %= 42;
		if (std::find(numbers.begin(), numbers.end(), x) == numbers.end()) numbers.push_back(x);
	}

	std::cout << numbers.size() << std::endl;
}