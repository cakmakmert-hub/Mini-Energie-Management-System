/*
 * ConsoleUI.cpp
 *
 *  Created on: 11.02.2026
 *      Author: cakma
 */
#include "ConsoleUI.h"
#include <iostream>
#include <iomanip>

void ConsoleUI::run() {
	configure();
	simulate();
	printResults();
}


void ConsoleUI::configure() {
	std::cout << "Battery capacity (kWh): ";
	std::cin >> batteryCap;

	std::cout << "Load demand per hour (kWh): ";
	std::cin >> loadDemand;

	std::cout << "PV peak power (kWh): ";
	std::cin >> pvPeak;

	std::cout << "Simulation duration (hours): ";
	std::cin >> duration;
}


void ConsoleUI::printResults() {
	double totalImport = 0;
	double totalExport = 0;

	std::cout << "\nSimulation Results:\n";
	std::cout << "Hour | Prod | Cons | Import | Export\n";
	std::cout << "--------------------------------------\n";

	for (size_t i = 0; i < results.size(); ++i) {
		const auto& r = results[i];

		totalImport += r.gridImport;
		totalExport += r.gridExport;

		std::cout << std::setw(4) << i <<" | "
				<< std::setw(4) << r.producedEnergy << " | "
				<< std::setw(4) << r.consumedEnergy << " | "
				<< std:.setw(6) << r.gridImport << " | "
				<< std::setw(6) << r.gridExport << " | "
				 << "\n";
	}

	std::cout << "\nTotal Grid Import: " << totalImport << " kWh\n";
	std::cout << "Total Grid Export: " << totalExport << " kWh\n";
}

