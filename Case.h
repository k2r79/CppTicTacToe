/*
 * Case.h
 *
 *  Created on: 21 janv. 2015
 *      Author: Vincent
 */

#ifndef CASE_H_
#define CASE_H_

#include "Pion.h"

class Case {
	public:
		Case();
		Pion* getPion();
		bool setPion(Pion* pion);

	private:
		Pion *pion;
};

#endif /* CASE_H_ */
