#pragma once
#include "shape.h"
class rectangle : public  shape {
protected:
    int a, b, c, d;
    int angle1, angle2, angle3, angle4;
public:
    rectangle(int a, int b);
  
    std::string getname();
   
    int countSides();
   
    int ReturnA();
 
    int Returnb();
   
    int Returnc();
    
    int Returnd();
   
    int Returnangle1();
   
    int Returnangle2();
    
    int Returnangle3();
   ;
   int Returnangle4();
      

   void print_info() override;
  
};