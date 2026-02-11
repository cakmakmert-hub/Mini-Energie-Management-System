/*
 * Battery.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef COMPONENTS_BATTERY_H_
#define COMPONENTS_BATTERY_H_
#pragma once

class Battery {
private:
	double capacity;
	double current;

public:
	Battery(double capacity);

	double charge (double energy);
	double discharge (double energy);

	double getLevel() const;
};




#endif /* COMPONENTS_BATTERY_H_ */
