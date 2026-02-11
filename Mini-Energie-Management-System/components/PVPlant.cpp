/*
 * PVPlant.cpp
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#include "PVPlant.h"

PVPlant::PVPlant(double peakPower) : peakPower(peakPower) {}

double PVPlant::produce(const Context& ctx) {
    // sehr einfache Tageskurve
    if (ctx.timestep >= 6 && ctx.timestep <= 18)
        return peakPower;
    return 0.0;
}


