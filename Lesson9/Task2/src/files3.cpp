#include <iostream>
#include <string>
#include "equilateraltriangle.h"
#include "isoscelestriangle.h"
#include "parallelogram.h"
#include "rect.h"
#include "rectangle.h"
#include "rhombus.h"
#include "righttriangle .h"
#include "triangle.h"
















    


int main() {

    shape* b = new triangle(10, 20, 30, 50, 60, 70);
    b->print_info();

    shape* c = new righttriangle(10, 20, 30, 50, 60);

    c->print_info();
    shape* d = new isoscelestriangle(10, 15, 40, 50);
    d->print_info();

    shape* e = new  equilateraltriangle(10);
    e->print_info();

    delete b;
    b = nullptr;
    delete c;
    c = nullptr;
    
    delete d;
    d = nullptr;
    delete e;
    d = nullptr;
  


     b = new rectangle(30, 20);
    b->print_info();

    c = new rect(20);
    c->print_info();

    d = new parallelogram(10, 30, 15, 40);
    d->print_info();

    e = new rhombus(10, 23, 40);
    e->print_info();

    delete b;
    delete c;
    delete d;
    delete e;
    return 0;
}