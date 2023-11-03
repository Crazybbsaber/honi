#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, r, s;
    std::cin >> n;
    std::cin >> r;
    std::cin >> s;
    std::string out = "";

    for (int m = 0; m < n; m++) {
        int min = r;
        int max = -1;
        std::vector<std::string> data;
        for (int i = 0; i < r; i++) {
            std::string in;
            std::cin >> in;
            data.push_back(in);
        }

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < r; j++) {
                if (data[j][i] == '#') {
                    if (r - j > max) max = r - j;
                    if (r - j < min) min = r - j;
                }
            }
        }

        out += std::to_string(max - min);
        out += '\n';
    }

    out.pop_back();
    std::cout << out << std::endl;
}