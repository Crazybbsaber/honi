#include <iostream>
#include <string>

int main() {
    const double pi = 3.14159265359; // In Euclidean geometry, π (pi) is the ratio of how much the circumference is bigger than the diameter of the circle
    const double tc = 2; // In Taxicab geometry, what would be π in Euclidian geometry is equal to 2
    
    int r;
    std::cin >> r;

    std::cout << std::to_string(pi * (r * r)) << std::endl; // The area of the circle in Euclidian geometry
    std::cout << std::to_string(tc * (r * r)) << std::endl; // The area of the circle in Taxicab geometry
}