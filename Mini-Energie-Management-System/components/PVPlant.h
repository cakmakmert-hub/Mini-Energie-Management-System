/*
 * PVPlant.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef COMPONENTS_PVPLANT_H_
#define COMPONENTS_PVPLANT_H_
#pragma once
#include "Producer.h"

class PVPlant : public Producer {
private:
	double peakPower;

public:
	   PVPlant(double peakPower);
	   double produce(const Context& ctx) override;

};




#endif /* COMPONENTS_PVPLANT_H_ */
