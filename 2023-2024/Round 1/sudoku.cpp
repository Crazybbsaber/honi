#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::vector<int> > board;
    {
        std::string bogus;
        std::cin >> bogus;
    }
    for (int m = 0; m < 12; m++) {
        if (m % 4 != 3) {
            std::vector<int> row;
            for (int n = 0; n < 13; n++) {
                char x;
                std::cin >> x;
                if ((x > 48 && x < 58) || x == '.') row.push_back(x);
            }
            board.push_back(row);
        } else {
            std::string bogus;
            std::cin >> bogus;
        }
    }
    bool endit = false;
    for (int n = 0; n < 9; n++) {
        std::vector<int> crow;
        std::vector<int> ccol;
        for (int m = 0; m < 9; m++) {
            int crowdig = board[n][m];
            int ccoldig = board[m][n];
            if (crowdig != '.') {
                if (std::find(crow.begin(), crow.end(), crowdig) == crow.end()) crow.push_back(crowdig);
                else {
                    std::cout << "GRESKA" << std::endl;
                    endit = true;
                    break;
                }
            }
            if (ccoldig != '.') {
                if (std::find(ccol.begin(), ccol.end(), ccoldig) == ccol.end()) ccol.push_back(ccoldig);
                else {
                    std::cout << "GRESKA" << std::endl;
                    endit = true;
                    break;
                }
            }
        }
        if (endit) break;
    }
    if (!endit) {
        for (int n = 0; n < 3; n++) {
            for (int m = 0; m < 3; m++) {
                std::vector<int> csqr;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int csqrdig = board[n*3+i][m*3+j];
                        if (csqrdig != '.') {
                            if (std::find(csqr.begin(), csqr.end(), csqrdig) == csqr.end()) csqr.push_back(csqrdig);
                            else {
                                std::cout << "GRESKA" << std::endl;
                                endit = true;
                                break;
                            }
                        }
                    }
                    if (endit) break;
                }
                if (endit) break;
            }
            if (endit) break;
        }
    }
    if (!endit) std::cout << "OK" << std::endl;
}
