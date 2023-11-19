// https://evaluator.hsin.hr/tasks/HONI212223kaucuk/

#include <iostream>
#include <string>

int main() {
	int n, section = 0, subsection = 0, subsubsection = 0;
	std::cin >> n;
	std::string out;

	for (int i = 0; i < n; i++) {
		std::string command, content;
		std::cin >> command >> content;
		
		if (command == "section") {
			section++;
			subsection = 0; subsubsection = 0;
			out += std::to_string(section);
			out += ' ';
			out += content;
		} else if (command == "subsection") {
			subsection++;
			subsubsection = 0;
			out += std::to_string(section);
			out += '.';
			out += std::to_string(subsection);
			out += ' ';
			out += content;
		} else {
			subsubsection++;
			out += std::to_string(section);
			out += '.';
			out += std::to_string(subsection);
			out += '.';
			out += std::to_string(subsubsection);
			out += ' ';
			out += content;
		}

		out += '\n';
	}

	std::cout << out;
}