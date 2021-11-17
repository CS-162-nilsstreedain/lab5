//
//  circle.h
//  Lab 5
//
//  Created by Nils Streedain on 10/17/21.
//

#ifndef circle_h
#define circle_h

#include <iostream>
#include <cmath>
#include "shape.h"

class Circle : public Shape {
private:
	float radius;
public:
	Circle();
	Circle(float);
	
	float getRadius();
	
	void setRadius(float);
	
	float area() const;
	void print();
};

#endif /* circle_h */
