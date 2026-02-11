/*
 * Battery.cpp
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#include "Battery.h"
#include <algorithm>

Battery::Battery(double capacity)
	: capacity (capacity), current(0.0) {}

double Battery::charge(double energy) {
	double accepted = std::min(energy, capacity - current);
	current += accepted;
	return accepted;
}

double Battery::discharge(double energy) {
	double delivered = std::min(energy, current);
	current -= delivered;
	return delivered;
}

double Battery::getLevel() const{
	return current;
}

