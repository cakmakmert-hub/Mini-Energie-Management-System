/*
 * Load.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef COMPONENTS_LOAD_H_
#define COMPONENTS_LOAD_H_
#pragma once
#include "Consumer.h"

class Load : public Consumer{
private:
	double demand;

public:
	Load(double demand);
	double consume(const Context& ctx) override;
};




#endif /* COMPONENTS_LOAD_H_ */
