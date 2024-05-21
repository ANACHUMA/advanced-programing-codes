#ifndef SHAPES_H
#define SHAPES_H

namespace shapes {
    class Square {
    private:
        double sideLength;
    public:
        Square();
        Square(double side);
        ~Square();
        double getSideLength() const;
    };

    class Triangle {
    private:
        double base;
        double height;
    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();
        double getBase() const;
        double getHeight() const;
    };

    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);
        ~Circle();
        double getRadius() const;
    };
}

#endif