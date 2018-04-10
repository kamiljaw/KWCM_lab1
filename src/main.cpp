#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif


int main()
{

#ifdef USE_TRIGONOMETRY_DEGREE
	double kat = 45;
	std::cout << "sin " << kat << " stopni = " << degreemath::sin(kat) << std::endl;
	std::cout << "cos " << kat << " stopni = " << degreemath::cos(kat) << std::endl;
	std::cout << "tg  " << kat << " stopni = " << degreemath::tan(kat) << std::endl;
	std::cout << "ctg " << kat << " stopni = " << degreemath::ctg(kat) << std::endl;
	std::cout << "Uzyto biblioteki trygonometria." << std::endl;
#else
	std::string kat = "pi/4";
	double radian = M_PI / 4.0;
	std::cout << "sin " << kat << " = " << sin(radian) << std::endl;
	std::cout << "cos " << kat << " = " << cos(radian) << std::endl;
	std::cout << "tg  " << kat << " = " << tan(radian) << std::endl;
	std::cout << "ctg " << kat << " = " << 1 / tan(radian) << std::endl;
	std::cout << "Uzyto cmath." << std::endl;
#endif

	std::cin.get();

}