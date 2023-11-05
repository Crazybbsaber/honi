#include <iostream>
#include <vector>
#include <string>

int main() {
    int g = 0, s = 0, r = 0, h = 0;
    int n;
    std::cin >> n;
    for (int m = 0; m < n; m++) {
        char x;
        std::cin >> x;
        switch(x) {
            case 'C':
                g++;
                break;
            case 'Z':
                s++;
                break;
            case 'P':
                r++;
                break;
            case 'Y':
                h++;
                break;
        }
    }
    int hi = g;
    std::string out = "LANA";
    if (s == hi) out = "EXPELLIARMUS";
    if (s > hi) {
        hi = s;
        out = "LARA";
    }
    if (r == hi) out = "EXPELLIARMUS";
    if (r > hi) {
        hi = r;
        out = "MASA";
    }
    if (h >= hi) out = "EXPELLIARMUS";
    std::cout << out << std::endl;
}
