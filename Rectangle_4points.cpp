#include "Rectangle_4_points.h"
#include <iostream>
#include <math.h>

using namespace std;

void Rectangle::setWidth (Point A,Point B) {
                   width=sqrt((B.getx()-A.getx())*(B.getx()-A.getx())+(B.gety()-A.gety())*(B.gety()-A.gety()));
                   }  
void Rectangle::setLength (Point A, Point D) {
                   length=sqrt((D.getx()-A.getx())*(D.getx()-A.gety())+(D.gety()-A.gety())*(D.gety()-A.gety()));
                   }       
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
