#include <iostream>
#include <cmath>

double calcSquare(double length) {
    double area = pow(length,2);
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

double calcCircle(double radius) {
    double pi = 22.0/7;
    double area = pow((pi*radius),2);
    return area;
}

double calcCone(double radius, double height) {
    double pi = 22.0/7;
    double slantHeight = sqrt(pow(radius,2) + pow(height,2)); 
    double area = pi*radius*(radius + slantHeight);
    return area;
}

double calcSphere(double radius) {
    double pi = 22.0/7;
    double area = 4 * pi * pow(radius,2);
    return area;
}

int main() {
    std::cout << calcSquare(5) << std::endl;
    std::cout << calcRectangle(5,2) << std::endl;
    std::cout << calcTriangle(5,3) << std::endl;
    std::cout << calcRhombus(5,4) << std::endl;
    std::cout << calcTrapezoid(10,3,5) << std::endl;
    std::cout << calcPolygon(30,5) << std::endl;
    std::cout << calcCircle(10) << std::endl;
    std::cout << calcCone(10,7) << std::endl;
    std::cout << calcSphere(8) << std::endl;

}