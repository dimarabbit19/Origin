#pragma once
#include "shape.h"
class triangle : public shape {
protected:
    int a, b, c;
    int angle1, angle2, angle3;
public:
    triangle(int a, int b, int c, int A, int B, int C);
      std::string getname();
     
    int countSides();
    
    int ReturnA();
    
    int Returnb();
   
    int Returnc();
   
    int Returnangle1();
   
    int Returnangle2();
   
    int Returnangle3();
   
    
    void print_info() override;
  




};