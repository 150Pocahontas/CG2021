#include "point.h"

Point::Point(){
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(float px, float py, float pz){
	x = px;
	y = py;
	z = pz;
}

float Point::getX(){
	return x;
}

float Point::getY(){
	return y;
}

float Point::getZ(){
	return z;
}