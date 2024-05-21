#ifndef Task7_RECTANGLE_H
#define Task7_RECTANGLE_H

class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle();
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);
    float getLength();
    float getWidth();

    float calculateArea();
};
#endif