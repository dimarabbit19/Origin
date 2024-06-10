#pragma once
#include "shape.h"
class parallelogram : public shape {
protected:
    int a, b, c, d;
    int angle1, angle2, angle3, angle4;
public:
    parallelogram(int a, int b, int A, int D);
    std::string getname();
   
    int countSides();
    
    int ReturnA();
     
    int Returnb();
     
    int Returnc();
   
    int Returnd();
      
    int Returnangle1();
   
    int Returnangle2();
     
    int Returnangle3();
     
    int Returnangle4();
     
    void print_info() override;
     

};