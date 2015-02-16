#include "Coordonnee.h"

Coordonnee::Coordonnee(int x, int y) {
	this->x = x;
	this->y = y;
}

int Coordonnee::toIndex() {
	return toIndex(this->x, this->y);
}

int Coordonnee::toIndex(int x, int y) {
	return (y * x) + x;
}
