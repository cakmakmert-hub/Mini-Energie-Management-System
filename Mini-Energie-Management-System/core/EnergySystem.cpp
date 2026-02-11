/*
 * EnergySystem.cpp
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#include "EnergySystem.h"

EnergySystem::EnergySystem()
: battery(10.0), load(5.0), pv(3.0) {}

StepResult EnergySystem::step(const Context& ctx) {
	StepResult r{};

	StepResult r{};

	double production = pv.produce(ctx);
	double consumption = load.consume(ctx);

	r.producedEnergy = production;
	r.consumedEnergy = consumption;

	double surplus = production - consumption;

	if (surplus > 0) {
		double stored = battery.charge(surplus);
		r.storedEnergy = stored;
		r.gridExport = surplus - stored;
	} else {
		double needed =- surplus;
		double fromBattery = battery.discharge(needed);
		r.gridImport = needed - fromBAttery;

	}

	return r;
}



