/*
 * @Author: Tan fangyuan
 * @Date: 2020-11-14 22:02:21
 * @LastEditTime: 2020-11-21 17:30:28
 * @Description:
 */

#include "chapter7.h"

#include <iostream>

#include "utils.h"

/* Point class */

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

void Point::Move(float x, float y) {
    this->x += x;
    this->y += y;
}

/* Rectangle class */

Rectangle::Rectangle(Point p, float width, float height) {
    std::cout << "Creating a rectangle." << std::endl;
    this->p = p;
    this->width = width;
    this->height = height;
}

float Rectangle::area() {
    return width * height;
}

bool Rectangle::is_valid() {
    return width > 0 && height > 0;
}

/* Square class */
Square::Square(Point p, float width) {
    std::cout << "Creating a square." << std::endl;
    Rectangle(p, width, width);
    this->width = width;
    this->p = p;
}

bool Square::is_valid() {
    return this->getH() == this->getW() && this->getW() > 0;
}

/* Implemention of Matrix function */
Matrix::Matrix(int d, float A[], float b[]) {
    this->dimension = d;
// if (sizeof(A) / sizeof(A[0]) != d*d || sizeof(b) / sizeof(b[0]) != d)
// {
//     std::cout << sizeof(A) << " " << sizeof(A[0]) << " " << sizeof(b) << " " << sizeof(b[0]) << std::endl;
//     std::cout << "input format error!" << std::endl;
// }
#if 1
    {
        this->A = new float[d * d];
        this->b = new float[d];
        for (int i = 0; i < d * d; i++) {
            this->A[i] = A[i];
            if (i < d) {
                this->b[i] = b[i];
            }
        }
    }
#endif
}

Matrix::~Matrix() {
    delete (this->A);
    delete (this->b);
}

void Matrix::show() {
    std::cout << "Equations [Ax = b] is " << std::endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            std::cout << A[dimension * i + j] << " * X" << j + 1 << "\t";
            if (j < dimension - 1) {
                std::cout << "+\t";
            } else {
                std::cout << "=\t";
            }
        }
        std::cout << b[i];
        std::cout << std::endl;
    }
}

int Matrix_func() {
    float A[4] = {0.5, 0.6, 0.7, 1.5};
    float b[2] = {1.7, 3.5};
    Matrix m1(2, A, b);
    m1.show();
    return 0;
}

// int main() {
//     return 0;
// }