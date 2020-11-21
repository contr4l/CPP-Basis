/*
 * @Author: Tan fangyuan
 * @Date: 2020-11-15 01:33:33
 * @LastEditTime: 2020-11-17 22:31:10
 * @Description: common utils
 */
#include "iostream"

class Point {
private:
    float x, y;

public:
    Point(float x = 0, float y = 0);
    ~Point(){};
    float getX() {
        return x;
    };
    float getY() {
        return y;
    };
    void Move(float x, float y);
};

class Rectangle {
private:
    Point p;
    float height;
    float width;

public:
    Rectangle(Point p = Point(0, 0), float length = 1, float width = 1);
    ~Rectangle(){};
    float getH() {
        return height;
    };
    float getW() {
        return width;
    };
    Point getP() {
        return p;
    };
    float area();
    bool is_valid();
};

class Square : public Rectangle {
private:
    Rectangle member;
    Point p;
    float width;

public:
    Square(Point p, float width);
    ~Square(){};
    bool is_valid(/* reload */);
};

class Base0
{
public:
    int var0;
    void fun0(){std::cout << "Base 0" << std::endl;};
};

class Base1: virtual public Base0
{
public:
    int var1;
    void fun1(){std::cout << "Base 1" << std::endl;};
};

class Base2: virtual public Base0
{
public:
    int var2;
    void fun2(){std::cout << "Base 2" << std::endl;};
};

class Derived: public Base1, public Base2
{
public:
    int var3;
    int fun3();
};