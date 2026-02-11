#include "core/EnergySystem.h"
#include "ui/ConsoleUI.h"
#include <iostream>

/*
int main() {
	EnergySystem system;

	for (int t = 0; t < 24; ++t) {
		Context ctx{t, 1.0};
		StepResult r = system.step(ctx);

		std::cout << "t=" << t
				<< " prod=" << r.producedEnergy
				<< " cons=" << r.consumedEnergy
				<< " grid+=" << r.gridImport
				<< " grid==" << r.gridExport
				<< std::endl;

	}
}
*/

int main() {
    ConsoleUI ui;
    ui.run();
    return 0;
}
