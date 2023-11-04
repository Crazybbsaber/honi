#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

int main() {
	int n, q;
	std::cin >> n;
	std::cin >> q;
	std::vector<int> chocolates;

	for (int m = 0; m < n; m++) {
		int x;
		std::cin >> x;
		chocolates.push_back(x);
	}

	std::sort(chocolates.begin(), chocolates.end());
	std::string out = "";

	for (int m = 0; m < q; m++) {
		int k, c;
		std::cin >> k;
		std::cin >> c;

		std::vector<int> less;
		std::vector<int> more;
		for (int chocolate : chocolates) {
			if (chocolate <= k) less.push_back(chocolate);
			else more.push_back(chocolate);   
		}

		std::sort(more.begin(), more.end(), std::greater<>());
		int lessamount = c > less.size()? less.size() : c;
		int moreamount = c > less.size()? c - less.size() : 0;
		int moredif = more.size() - moreamount;
		// std::cout << moredif << '\t' << more.size() << std::endl;
		int dif = std::reduce(chocolates.begin(), chocolates.end());

		for (int i = 0; i < moredif; i++) {
			int tmp;
			tmp = std::reduce(less.begin(), less.begin() + lessamount);
			int moreprice = std::reduce(more.begin(), more.begin() + moreamount);
			tmp += (k * moreamount);
			tmp -= moreprice - (k * moreamount);
			if (dif > tmp) dif = tmp;
			if (lessamount != 0) lessamount--;
			moreamount++;
		}

		if (moredif == 0 && more.size() != 0) {
			dif = std::reduce(less.begin(), less.end());
			int moreprice = std::reduce(more.begin(), more.end());
			dif += (k * moreamount);
			dif -= moreprice - (k * moreamount);
		} else if (moredif == 0) {
			dif = std::reduce(less.begin(), less.begin() + c - 1);
		} // It doesn't want to cooperate

		out += std::to_string(dif);
		out += '\n';
	}

	out.pop_back();
	std::cout << out << std::endl;
}