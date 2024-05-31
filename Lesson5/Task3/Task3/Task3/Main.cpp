#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"
#include<iostream>
int main() {
    setlocale(LC_ALL, "ru");

    triangle b(10, 20, 30, 50, 60, 70);
    b.print_info();

    righttriangle c(10, 20, 30, 50, 60);
    c.print_info();

    isoscelestriangle d(10, 20, 50, 80);
    d.print_info();

    equilateraltriangle e(10);
    e.print_info();

    rectangle f(30, 20);
    f.print_info();

    square g(20);
    g.print_info();

    parallelogram h(10, 30, 120, 60);
    h.print_info();

    rhombus i(10, 60, 120);
    i.print_info();

    return 0;
}