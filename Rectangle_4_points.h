#ifndef Rectangle_H
#define Rectangle_H

class Rectangle { 
      float width, length;
      public: 
              Rectangle (Point A,Point B, Point C, Point D)
                    {
                    };
              float perimeter(float width,float length);
              float get_width(); 
              float get_length();
              void setWidth (Point A,Point B );
              void setLength (Point A, Point D);
              float area(float , float );
              void sameArea (Rectangle R2);
              
};

#endif
