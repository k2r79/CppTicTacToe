#include "Coordonnee.h"

Coordonnee::Coordonnee(int x, int y, int largeur) {
	this->x = x;
	this->y = y;
	this->largeur = largeur;
}

int Coordonnee::toIndex() {
	return toIndex(x, y, largeur);
}

int Coordonnee::toIndex(int x, int y, int largeur) {
	return (y * largeur) + x;
}

int Coordonnee::getX() {
	return x;
}

int Coordonnee::getY() {
	return y;
}
