#include <iostream>
#include <string>
#include <vector>

std::string cornerrow(int n) { // Rows on the top and bottom
    std::string row;
    for (int m = 0; m < n; m++) {
        row += "..";
        if (m % 3 == 2) row += '*';
        else row += '#';
        row += '.';
    }
    row += '.';
    return row;
}

std::string midrow(int n) { // Rows surrounding the text
    std::string row;
    for (int m = 0; m < n; m++) {
        row += '.';
        if (m % 3 == 2) row += '*';
        else row += '#';
        row += '.';
        if (m%3 == 2) row += '*';
        else row += '#';
    }
    row += '.';
    return row;
}

std::string contentrow(int n, std::string text) { // Row containing the framed text
    std::string row;
    int remwendies = 0;
    for (int m = 0; m < n; m++) {
        if (m % 3 == 2) remwendies = 2;
        if (remwendies) {
            row += '*';
            remwendies--;
        } else row += '#';
        row += '.';
        row += text[m];
        row += '.';
    }
    if (remwendies) row += '*';
    else row += '#';
    return row;
}

int main() {
    std::string intext;
    std::cin >> intext;
    int n = intext.size();

    std::string corner = cornerrow(n);
    std::string mid = midrow(n);

    std::cout << corner << std::endl;
    std::cout << mid << std::endl;
    std::cout << contentrow(n, intext) << std::endl;
    std::cout << mid << std::endl;
    std::cout << corner << std::endl;
}