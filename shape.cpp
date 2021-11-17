//
//  shape.cpp
//  Lab 5
//
//  Created by Nils Streedain on 10/17/21.
//

#include "shape.h"

Shape::Shape() {
	name = "";
	color = "";
}

Shape::Shape(std::string name) {
	this -> name = name;
	color = "";
}

Shape::Shape(std::string name, std::string color) {
	this -> name = name;
	this -> color = color;
}

std::string Shape::getName() {
	return name;
}

std::string Shape::getColor() {
	return color;
}

void Shape::setName(std::string name) {
	this -> name = name;
}

void Shape::setColor(std::string color) {
	this -> color = color;
}
