#include <iostream>
#include <vector>
#include <string>

// It passes the first two clusters, the third one timed out...

void check(std::vector<int>& arr, std::string& out) {
	if (arr[0] != 1 && arr[0] < arr.back()) {
		out += "NE\n";
		return;
	}
	for (size_t i = 1; i < arr.size(); i++) {
		if (arr[i] != 1 && arr[i] < arr[i-1]) {
			out += "NE\n";
			return;
		}
	}
	out += "DA\n";
}

int main() {
	int n, q;
	std::cin >> n >> q;

	std::vector<int> arr(n), indx(n);
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		indx[arr[i]-1] = i;
	}

	std::string out;

	for (int i = 0; i < q; i++) {
		int a, b;
		std::cin >> a >> b;

		indx[--a] ^= indx[--b];
		indx[b] ^= indx[a];
		indx[a] ^= indx[b];

		a = indx[a], b = indx[b];

		arr[a] ^= arr[b];
		arr[b] ^= arr[a];
		arr[a] ^= arr[b];

		// for (int x : arr) std::cout << x << ' ';
		// std::cout << '\n';

		check(arr, out);
	}

	std::cout << out;
}