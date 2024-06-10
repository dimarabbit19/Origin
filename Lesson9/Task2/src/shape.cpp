
#include "shape.h"


    shape::shape() : countsides(0), name("null") {};
  
    
      void shape::print_info() {
        std::cout << name;
        std::cout << countsides;
      }


