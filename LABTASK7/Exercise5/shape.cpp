#include "shapes.h"

namespace shapes {
    Square::Square() : sideLength(0) {}
    Square::Square(double side) : sideLength(side) {}
    Square::~Square() {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Triangle::Triangle() : base(0), height(0) {}
    Triangle::Triangle(double b, double h) : base(b), height(h) {}
    Triangle::~Triangle() {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    Circle::Circle() : radius(0) {}
    Circle::Circle(double r) : radius(r) {}
    Circle::~Circle() {}

    double Circle::getRadius() const {
        return radius;
    }
}