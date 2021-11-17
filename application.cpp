//
//  application.cpp
//  Lab 5
//
//  Created by Nils Streedain on 10/17/21.
//

#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"


bool operator > (const Rectangle & rectangle1, const Rectangle & rectangle2) {
	return rectangle1.area() > rectangle2.area();
}

bool operator < (const Rectangle & rectangle1, const Rectangle & rectangle2) {
	return rectangle1.area() < rectangle2.area();
}

void print_shape_info(Shape & shape) {
	shape.print();
}

int main(int argc, const char * argv[]) {
	
	Circle circle(5);
	print_shape_info(circle);
	
	Rectangle rectangle(10, 5);
	print_shape_info(rectangle);
	
	Square square(5);
	print_shape_info(square);
	
	if (square < rectangle)
		std::cout << "Rectangle is larger than square" << std::endl;
	else
		std::cout << "Rectangle is smaller than square" << std::endl;
		
	return 0;
}
