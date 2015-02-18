#ifndef CASE_H_
#define CASE_H_

#include "Pion.h"
#include <cstdlib>

class Case {
	public:
		Case();
		Pion* getPion();
		void setPion(Pion* pion);

	private:
		Pion *pion;
};

#endif /* CASE_H_ */
