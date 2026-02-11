/*
 * EnergySystem.cpp
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#include "EnergySystem.h"

EnergySystem::EnergySystem(double batteryCap,
							double loadDemand,
							double pvPeak)
: battery(batteryCap), load(loadDemand), pv(pvPeak) {}

StepResult EnergySystem::step(const Context& ctx) {
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
		r.gridImport = needed - fromBattery;

	}

	return r;
}



