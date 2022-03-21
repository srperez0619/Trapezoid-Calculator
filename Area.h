#ifndef AREA_H
#define AREA_H
/* Class: CS4308 
 * Section: 01	
 * Term: Fall 2021
 * Instructor: Sarah North
 * Name: Samantha Perez
 * Assignment: 1
 */
 
 using namespace std; 
 
class Area {
private: 
    double base1;
    double base2;
    double height; 
    double area; 
public:
    Area() {    //Default constructor, in the instance no data is inputed for the variables, there are default values set to each variable
        base1 = 1;
        base2 = 2;
        height = 3; 
    }
    Area(double input_base1, double input_base2, double input_height) {   //Overrided Constructor, this constructor takes inputs to make an instance
        base1 = input_base1;
        base2 = input_base2;
        height = input_height;
    }
    
    //This method computes the area of a trapezoid and returns the area as a double
    double computeArea(double base1, double base2, double height);    
};

#endif // AREA_H
