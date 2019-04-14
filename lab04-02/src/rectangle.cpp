#include "rectangle.h"


double Rectangle::get_height(){
    return this->height;
}

double Rectangle::get_width(){
    return this->width;
}

void Rectangle::set_height(double h){
    this->height = h;
}

void Rectangle::set_width(double w){
    this->width = w;
}

double Rectangle::get_area(){
    return this->width * this->width;
}

double Rectangle::get_perimeter(){
    return (2*this->width) + (2*this->width);
}