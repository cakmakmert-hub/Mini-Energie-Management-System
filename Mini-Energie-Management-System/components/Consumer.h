/*
 * Consumer.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef COMPONENTS_CONSUMER_H_
#define COMPONENTS_CONSUMER_H_
#pragma once
#include "../core/Context.h"

class Consumer {
public:
	virtual ~Consumer() = default;
	virtual double consume(const Context& ctx) = 0;
};




#endif /* COMPONENTS_CONSUMER_H_ */
