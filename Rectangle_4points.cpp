#include "Rectangle_4_points.h"
#include <iostream>
#include <math.h>

using namespace std;

Rectangle::Rectangle (Point A, Point C) {
                     width=sqrt((C.getx()-A.getx())*(C.getx()-A.getx()));
                     length=sqrt((C.gety()-A.gety())*(C.gety()-A.gety()));
                     };       
float Rectangle::get_width(){
                    return width;
                   } 
float Rectangle::get_length() {
                    return length;
                   }  
float Rectangle::perimeter (float width,float length) { 
                   return 2*(width+length); 
                   }
float Rectangle::area(float width,float length) {
                    return width*length;  
                   }
void Rectangle::sameArea (Rectangle R2) {
                   if (width==R2.get_width() && length==R2.get_length()) {
                      cout<<"\nRectangles have the same sizes";
                      }
                   }
