#pragma once
#include "shape.h"
class equilateraltriangle : public shape {
protected:
    int a, b, c;
    int angle1, angle2, angle3;
public:
    equilateraltriangle(int a);
       
    void print_info() override;
     

    std::string getname();
   
    int countSides();
    
    int ReturnA();
   
    int Returnb();
  
    int Returnc();
    
    int Returnangle1();
     
    int Returnangle2();
     
    int Returnangle3();
   

};