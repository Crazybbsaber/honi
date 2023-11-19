#include <iostream>
#include <vector>

int main() {
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < 3; i++) {
		int n;
		std::cin >> n;
		if (i == 0) {
			a = n;
			continue;
		}
		if (i == 1) {
			if (n < a) {
				b = a;
				a = n;
				continue;
			} else {
				b = n;
				continue;
			}	
		}
		if (i == 2) {
			if (n < a) {
				c = b;
				b = a;
				a = n;
				continue;
			}
			if (n < b) {
				c = b;
				b = n;
				continue;
			} else c = n;
		}
	}
	for (int i = 0; i < 3; i++)	{
		char x;
		std::cin >> x;
		switch (x) {
			case 'A':
				std::cout << a;
				break;
			case 'B':
				std::cout << b;
				break;
			case 'C':
				std::cout << c;
		}
		if (i != 2) std::cout << ' ';
	}
	std::cout << std::endl;
	return 0;
}