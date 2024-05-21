#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;

    Rectangle rectangle1;
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rectangle1.calculateArea() << std::endl;

    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rectangle2(length, width); // Using overloaded constructor

    std::cout << "Area of the second rectangle: " << rectangle2.calculateArea() << std::endl;

    return 0;
}