#include "Case.h"

Case::Case() {
	this->pion = 0;
}

Pion* Case::getPion() {
	return pion;
}

bool Case::setPion(Pion* pion) {
	if (this->pion) {
		return false;
	}

	this->pion = pion;

	return true;
}
