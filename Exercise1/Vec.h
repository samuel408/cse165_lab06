#ifndef VEC_H
#define VEC_H
#include <iostream>
//using namespace std;

class Vec{

public:

    float x,y;//two float data numbers

    Vec(){//default constructor that intializes the variables as 0
        x=0;
        y=0;
    }

    Vec(float a, float b){//constructor from 2 floats 
        x=a;
        y=b;

    }

    void set(float a,float b){//takes two floats
     x=a;
     y=b;
    }

    void add(Vec vect){//takes another Vec and adds its x and y to the local instance's x and y
         x += vect.x;
         y += vect.y;
    }

    void print(){

       std :: cout << "("<< x << ", "<< y  << ")"<< std::endl;

    }



};


#endif