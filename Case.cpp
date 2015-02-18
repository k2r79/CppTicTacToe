#include "Case.h"
#include <cstdlib>

Case::Case() {
	this->pion = NULL;
}

Pion* Case::getPion() {
	return pion;
}

void Case::setPion(Pion* pion) {
	this->pion = pion;
}
