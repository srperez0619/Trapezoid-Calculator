using namespace std;
#include "Area.h"
#include <cmath>
#include <iostream>
/* Class: CS4308 
 * Section: 01	
 * Term: Fall 2021
 * Instructor: Sarah North
 * Name: Samantha Perez
 * Assignment: 1
 */

//This method takes three variables as input as doubles and returns the area as a double
double Area :: computeArea(double base1, double base2, double height) { 
    area = (0.5) * ( base1 + base2) * ( height);
    
    return area;
};

