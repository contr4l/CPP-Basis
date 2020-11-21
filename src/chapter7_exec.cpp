/*
 * @Author: Tan fangyuan
 * @Date: 2020-11-21 17:22:04
 * @LastEditTime: 2020-11-21 17:49:18
 * @Description: chapter7 exercises
 */

#include <iostream>
#include <typeinfo>

#include "chapter7.h"

float Rectangle::getArea() {
    Square* s = dynamic_cast<Square*>(this);
    if (s != 0) {
        std::cout << "square's area is " << width * length << std::endl;
        return width * length;
    }
    std::cout << "rectangle's area is " << width * length << std::endl;
    return width * length;
}

float Circle::getArea() {
    std::cout << "circle's area is " << PI * radius * radius << std::endl;
    return PI * radius * radius;
}

void exec7_5() {
    Shape* S1;
    S1 = new Rectangle(10.8, 21.5);
    S1->getArea();
    // delete S1;
    S1 = new Circle(5);
    S1->getArea();
    delete (S1);
    S1 = new Square(7.5);
    S1->getArea();
    delete (S1);
}

int main() {
    exec7_5();
    return 0;
}