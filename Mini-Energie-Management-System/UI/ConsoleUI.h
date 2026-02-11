/*
 * ConsoleUI.h
 *
 *  Created on: 11.02.2026
 *      Author: cakma
 */

#ifndef UI_CONSOLEUI_H_
#define UI_CONSOLEUI_H_
#pragma once
#include "../core/EnergySystem.h"
#include <vector>

class ConsoleUI {
public:
	void run();

private:
	void configure();
	void simulate();
	void printResults();

	double batteryCap;
	double loadDemand;
	double pvPeak;
	int duration;

	std::vector<StepResult> results;

};



#endif /* UI_CONSOLEUI_H_ */
