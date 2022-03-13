# Operator Overloading & Polymorphism
This week we will continue working with the shapes developed for the previous lab. 

## (5 pts) Operator Overloading
Make an operator overload member function for comparing rectangles based on their area. For example, you want to have the ability to compare two rectangles using the > and < operators, such as 

```
if (rect1 > rect2) {
   //do something
}
```

In order to do this, you need to make an operator overload for > and < in the Rectangle Class. 

```
bool operator> (const Rectangle &, const Rectangle &);
bool operator< (const Rectangle &, const Rectangle &);
```

Convince your TA that you can create different types of shapes and the inheritance and operator overloading is working for comparing rectangles.

## (5 pts) Implementing Polymorphism
Use the classes from the previous lab (Shape, Rectangle, Circle, and Square) to create polymorphism. Answer the questions below and implement the polymorphism in the appropriate location of the interface and implementation files.

- Which function(s) are you going to make polymorphic?
- How will you make it polymorphic?
- Can it be a pure virtual function?
- Which class have you made an abstract base class?

## (10 pts) Testing Polymorphism
Modify your **application.cpp** file to show polymorphism by making a function that prints the information of a shape. In this function, you will print the name, color, and area of the shape. You should pass your shape by reference (or address explicitly) to have polymorphism.
```
    void print_shape_info(Shape &);
```
