// https://evaluator.hsin.hr/tasks/HONI222326prijateljice/

#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <queue>

int main() {
	int n, m;
	std::cin >> n >> m;

	std::unordered_set<std::string> l;
	std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>> words;

	
	std::string prevword;

	for (int i = 0; i < n; i++) {
		std::string li;
		std::cin >> li;
		if (i == 0) prevword = li; 
		l.insert(li);
		words.push(li);
	}

	for (int j = 0; j < m; j++) {
		std::string zi;
		std::cin >> zi;
		words.push(zi);
	}

	bool isL = true;

	while (!words.empty()) {
		std::string word = words.top();
		words.pop();
		if (!((l.find(word) != l.end()) ^ isL) && (prevword[0] == word[0] || prevword[0] == (word[0]-1))) {
			isL ^= true;
			prevword = word;
		}
	} 

	std::cout << ((l.find(prevword) != l.end())? "Leona" : "Zoe");
}