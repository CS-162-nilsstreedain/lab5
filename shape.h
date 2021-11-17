//
//  shape.h
//  Lab 5
//
//  Created by Nils Streedain on 10/17/21.
//

#ifndef shape_h
#define shape_h

#include <iostream>

class Shape {
private:
	std::string name;
	std::string color;
public:
	Shape();
	Shape(std::string);
	Shape(std::string, std::string);
	
	std::string getName();
	std::string getColor();
	
	void setName(std::string);
	void setColor(std::string);
	
	virtual float area() const=0;
	virtual void print()=0;
};

#endif /* shape_h */
