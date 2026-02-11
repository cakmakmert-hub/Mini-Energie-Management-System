/*
 * Load.cpp
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#include "Load.h"

Load::Load(double demand) : demand(demand){}

double Load::consume(const Context&){
	return demand;
}



