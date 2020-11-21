/*
 * @Author: Tan fangyuan
 * @Date: 2020-11-17 22:41:55
 * @LastEditTime: 2020-11-21 17:43:47
 * @Description: class definition in chapter 7
 */

#define PI 3.1415926535897

class Matrix {
private:
    int dimension;
    float* A;
    float* b;

public:
    Matrix(int dimension, float A[], float b[]);
    ~Matrix();
    void show();
    float* solve();
};

class Shape {
public:
    virtual float getArea() = 0;
    virtual ~Shape(){};
};

class Rectangle : public Shape {
private:
    float width, length;

public:
    Rectangle(float x, float y) : width(y), length(x){};
    float getArea();
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r){};
    float getArea();
};

class Square: public Rectangle
{
private:
    float width;
public:
    Square(float a): Rectangle(a, a), width(a){};
};
