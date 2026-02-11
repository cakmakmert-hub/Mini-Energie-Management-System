/*
 * EnergySystem.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef CORE_ENERGYSYSTEM_H_
#define CORE_ENERGYSYSTEM_H_

#pragma once
#include "../components/Battery.h"
#include "../components/Grid.h"
#include "../components/Load.h"
#include "../components/PVPlant.h"
#include "StepResult.h"
#include "Context.h"

class EnergySystem{
private:
	Battery battery;
	Grid grid;
	Load load;
	PVPlant pv;

public:
	EnergySystem();
	StepResult step(const context& ctx);
};




#endif /* CORE_ENERGYSYSTEM_H_ */
