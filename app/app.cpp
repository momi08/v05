#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator ""_inch(unsigned long long inch) {
		return inch * 2.54;
	}

	double operator ""_eur(unsigned long long eur) {
		return eur * 7.5345;
	}

	vehicle::vehicle(int year) {
		yr = year;
	}

	tire::tire(double size) {
		d = size;
	}

	product::product(double price) {
		pr = price;
	}

	car::car(int yearof, double priceof, double size_of_tires) : vehicle(yearof), product(priceof), car_tr(size_of_tires) {}

	int vehicle::year() {
		return yr;
	}

	double tire::diameter() {
		return d;
	}

	double product::price() {
		return pr;
	}

	double car::tire_diameter() {
		return car_tr.diameter();
	}
}	
