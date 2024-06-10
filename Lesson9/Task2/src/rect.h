#pragma once
#include "shape.h"
class rect : public  shape {
protected:
    int angle1, angle2, angle3, angle4;
    int a, b, c, d;
public:
    rect(int num);
       
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