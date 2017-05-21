#include "../include/utils.hpp"
#include <iostream>
using namespace std;

/*Coordinate Function Implementations*/
Coordinate::Coordinate(int a=-1,int b=-1){
    this->x=a;
    this->y=b;
}
Coordinate::~Coordinate(){

}

//Getters and Setters:
int Coordinate::get_x(){
    return this->x;
}

void Coordinate::set_x(int x){
    this->x=x;
}

int Coordinate::get_y(){
    return this->y;
}

void Coordinate::set_y(int y){
    this->y=y;
}

//Operators:
bool Coordinate::operator == (Coordinate b){
    return this->x==b.x && this->y==b.y;
}

Coordinate Coordinate::operator + (double v){
    Coordinate r(this->x+v,this->y+v);
    return r;
}

Coordinate Coordinate::operator + (Coordinate b){
    Coordinate r(this->x+b.x,this->y+b.y);
    return r;
}

Coordinate Coordinate::operator - (double v){
    Coordinate r(this->x-v,this->y-v);
    return r;
}

Coordinate Coordinate::operator - (Coordinate b){
    Coordinate r(this->x-b.x,this->y-b.y);
    return r;
}

Coordinate Coordinate::operator * (double v){
    Coordinate r(this->x*v,this->y*v);
    return r;
}

//Functions:
Coordinate Coordinate::sum_axis (Coordinate a, double v, char axis){
    if(axis=='x')
        a.x+=v;
    else if(axis=='y')
        a.y+=v;
    else
        cout << "Unable parameter utilized for axis. Only accepted parameters are 'x' or 'y'";
    return a;
}

Coordinate Coordinate::sub_axis (Coordinate a, double v, char axis){
    if(axis=='x')
        a.x-=v;
    else if(axis=='y')
        a.y-=v;
    else
         cout << "Unable parameter utilized for axis. Only accepted parameters are 'x' or 'y'";
    return a;
}

Coordinate Coordinate::mult_axis (Coordinate a, double v, char axis){
    if(axis=='x')
        a.x*=v;
    else if(axis=='y')
        a.y*=v;
    else
         cout << "Unable Parameter Utilized for axis. Only accepted parameters are 'x' or 'y'";
    return a;
}
