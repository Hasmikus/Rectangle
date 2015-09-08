#include <iostream>
#include <conio.h>
#include "point.h"
#include "pointClass.cpp"
#include "Rectangle_4_points.h"
#include "Rectangle_4points.cpp"


using namespace std;


int main() {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    int x1_2,y1_2,x2_2,y2_2,x3_2,y3_2,x4_2,y4_2;
    cout<<"\nInput coordinates for  the 4 edges of first rectangle. For example 0 1"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    
    cout<<"\nInput coordinates for the 4 edges of  second rectangle. For example 0 1"<<endl;
    cin>>x1_2>>y1_2>>x2_2>>y2_2>>x3_2>>y3_2>>x4_2>>y4_2;
    Point A(x1,y1), B(x2,y2), C(x3,y3), D(x4,y4);
    Rectangle R1(A, B, C, D);
    R1.setWidth(A, B) ;
    R1.setLength(A, D);
    
    Point L(x1_2,y1_2), M(x2_2,y2_2), N(x3_2,y3_2), P(x4_2,y4_2);
    Rectangle R2(L, M, N, P);
    R2.setWidth(L, M) ;
    R2.setLength(L, P);
    
    


    cout<<"----------------------"<<endl;
    R1.sameArea(R2);
    cout<<"The coordinates of rectangle edges: (" <<A.getx()<<";"<<A.gety()<<"),"<<"("<<B.getx()<<";"<<B.gety()<<"),";
    cout<<"("<<C.getx()<<";"<<C.gety()<<"),"<<"("<<D.getx()<<";"<<D.gety()<<")"<<endl;
    cout<<"Width ="<<R1.get_width()<<"  Length="<<R1.get_length()<<endl;
    cout<<"Perimeter = "<<R1.perimeter(R1.get_width(), R1.get_length())<<endl;
    cout<<"Area= "<<R1.area(R1.get_width(),R1.get_length())<<endl;

getch();
return 0;
}


    
                                      
              

