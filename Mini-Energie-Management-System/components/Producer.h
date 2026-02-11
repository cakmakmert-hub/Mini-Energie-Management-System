/*
 * Producer.h
 *
 *  Created on: 05.02.2026
 *      Author: cakma
 */

#ifndef COMPONENTS_PRODUCER_H_
#define COMPONENTS_PRODUCER_H_
#pragma once
#include "../core/Context.h"

class Producer {
public:
    virtual ~Producer() = default;
    virtual double produce(const Context& ctx) = 0;
};





#endif /* COMPONENTS_PRODUCER_H_ */
