#include <iostream>
#include <cmath>

double calcSquare(double length) {
    double area = std::pow(length,2);
    return area;
}

double calcRectangle(double length, double width) {
    double area = length * width;
    return area;
}

double calcTriangle(double base, double height) {
    double area = (base * height) / 2;
    return area;
}

int calcRhombus(int large, int small) {
    int area = (large * small) / 2;
    return area;
}

int main() {
    std::cout << calcSquare(5) << std::endl;
    std::cout << calcRectangle(5,2) << std::endl;
    std::cout << calcTriangle(5,3) << std::endl;
}