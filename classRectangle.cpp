#include <iostream>
#include <conio.h>
#include "Point\point.h"
#include "Point\pointClass.cpp"
#include "Rectangle_4_points.h"
#include "Rectangle_4points.cpp"


using namespace std;


int main() {
    int x1,y1,x2,y2;
    int x1_2,y1_2,x2_2,y2_2;
    cout<<"\nInput coordinates for  2 edges  of first rectangle. (bottom left corner and top right corner) For example 0 1"<<endl;
    cin>>x1>>y1>>x2>>y2;
    
    cout<<"\nInput coordinates for 2 edges of  second rectangle. (bottom left corner and top right corner) For example 0 1"<<endl;
    cin>>x1_2>>y1_2>>x2_2>>y2_2;
    Point A(x1,y1), C(x2,y2);
    Rectangle R1(A, C);
      
    Point L(x1_2,y1_2), N(x2_2,y2_2);
    Rectangle R2(L, N);
    
    


    cout<<"----------------------"<<endl;
    R1.sameArea(R2);
    cout<<"\nThe coordinates of rectangle edges: (" <<A.getx()<<";"<<A.gety()<<"),"<<"("<<A.getx()<<";"<<C.gety()<<"),";
    cout<<"("<<C.getx()<<";"<<C.gety()<<"),"<<"("<<C.getx()<<";"<<A.gety()<<")"<<endl;
    cout<<"Width ="<<R1.get_width()<<"  Length="<<R1.get_length()<<endl;
    cout<<"Perimeter = "<<R1.perimeter(R1.get_width(), R1.get_length())<<endl;
    cout<<"Area= "<<R1.area(R1.get_width(),R1.get_length())<<endl;

getch();
return 0;
}


    
                                      
              

