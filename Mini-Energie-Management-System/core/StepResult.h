/*
 * StepResult.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef CORE_STEPRESULT_H_
#define CORE_STEPRESULT_H_

#pragma once

struct StepResult {
	double producedEnergy; // kWh
	double consumedEnergy;
	double storedEnergy;
	double gridImport;
	double gridExport;
};




#endif /* CORE_STEPRESULT_H_ */
