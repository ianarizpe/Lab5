#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle{

private:
   double x, y, r;
public:
    
   Circle(){
        x= 0;
        y=0;
        r = 1;
        area =3.14 * r *r;
   }
   
   double area =3.14 * r *r;

   Circle(double rPos, double yPos, double xPos) {
       x = xPos;
       y = yPos;
       r = rPos;
       area = 3.14 * r *r;
   }


    double  getX(){
        //double x = 0;
        //std::cin >> x ;  
        //scanf("%d", &x);
        return x;
    }
    double  getY(){
        //double y = 0;
        //std::cin >> y   ; 
        return y;
    }
    double  getR(){
        //double r = 0;
        //std::cin >> r   ; 
        return r;
    }

    void  setX(double xPos){
        x = xPos;
        
    }

    void  setY(double yPos){
        y = yPos;
        
    }
    void  setR(double rPos){
        r = rPos;
        
    }

};

#endif