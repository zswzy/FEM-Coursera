#include <iostream>

#include "triangle.h"

int main(){
	
	Triangle tri1(2., 3.), tri2(1., 5.);

	std::cout<<"Triangle 1 has area of "<< tri1.area() << std::endl;
	std::cout<<"Triangle 2 has base of "<< tri2.base <<"and height of " << tri2.height << std::endl;

	return 0;
}
