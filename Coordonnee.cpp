#include "Coordonnee.h"

Coordonnee::Coordonnee(int x, int y) {
	this->x = x;
	this->y = y;
}

int Coordonnee::getX() {
	return x;
}

int Coordonnee::getY() {
	return y;
}
