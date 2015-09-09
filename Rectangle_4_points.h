#ifndef Rectangle_H
#define Rectangle_H

class Rectangle { 
      float width, length;
      public: 
              Rectangle (Point A, Point C);
              float perimeter(float width,float length);
              float get_width(); 
              float get_length();
              float area(float , float );
              void sameArea (Rectangle R2);
              
};

#endif
