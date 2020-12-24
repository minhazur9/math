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
    double area = base * height / 2;
    return area;
}

double calcRhombus(double large, double small) {
    int area = large * small / 2;
    return area;
}

double calcTrapezoid(double large, double small, double height) {
    int area = ((large + small) / 2) * height;
    return area;
}

double calcPolygon(double perimeter, int sides) {
    double pi = 22.0/7;
    double sideHalf = perimeter / (sides * 2);
    double degrees =  (sides - 2) * 180 / (sides * 2);
    double radians = degrees * (pi / 180);
    double apothem =  sideHalf * std::tan(radians);
    double area = perimeter * apothem /2;
    return area;

}

int main() {
    std::cout << calcSquare(5) << std::endl;
    std::cout << calcRectangle(5,2) << std::endl;
    std::cout << calcTriangle(5,3) << std::endl;
    std::cout << calcRhombus(5,4) << std::endl;
    std::cout << calcTrapezoid(10,3,5) << std::endl;
    std::cout << calcPolygon(30,5) << std::endl;
}