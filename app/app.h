#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator ""_inch(unsigned long long inch);
	double operator ""_eur(unsigned long long eur);

	class tire {
		double d;
	public:
		tire(double d);
		double diameter();
	};

	class vehicle {
		int yr;
	public:
		vehicle(int yr);
		int year();
	};

	class product {
		double pr;
	public:
		product(double pr);
		double price();
	};

	class car : public vehicle, public product {
		tire car_tr;
	public:
		car(int yr, double pr, double car_tr);
		double tire_diameter();
	};
}