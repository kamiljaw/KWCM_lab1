#ifdef USE_TRIGONOMETRY_DEGREE
	#include <trygonometria.h>
#else
	#include <cmath>
#endif
#include <iostream>


int main() 
{ 
	double sinus;
	double cosinus;
	double tangens;
	double cotangens;
	double pi = 3.14;

	#ifdef USE_TRIGONOMETRY_DEGREE
		sinus = sin_degree(45)
		cosinus = cos_degree(45);
		tangens = tan_degree(45);
		cotangens = ctg_degree(45);
	#else
		sinus = sin(pi/4.0);
		cosinus = cos(pi/4.0);
		tangens = tan(pi/4.0);
		cotangens = 1/tan(pi/4.0);
	#endif
	
		std::cout<<sinus<<std::endl;
		std::cout<<cosinus<<std::endl;
		std::cout<<tangens<<std::endl;
		std::cout<<cotangens<<std::endl;
		system("pause");
	 
}