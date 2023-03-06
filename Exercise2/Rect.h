#ifndef RECT_H
#define RECT_H
#include <iostream>
#include "Vec.h"
using namespace std;



class Rect : public Vec{
    public:
        float a, b, c, d;

        Rect(){
            a = 0.0f;
            b = 0.0f;
            c = 0.0f;
            d = 0.0f;
        }

        Rect(float x, float y, float w, float h){
            a = x;
            b = y;
            c = w;
            d = h;
        }
       
        bool contains(Vec vect){
            float X = vect.x;
            float Y = vect.y;
            float xdis = a + c;
            float ydis = b - d; 

            if(X >= a && X <= xdis){
                if(Y <= b && Y >= ydis){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
};
#endif