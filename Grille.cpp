#include "Grille.h"

Grille::Grille(int largeur, int hauteur) {
	this->largeur = largeur;
	this->hauteur = hauteur;
	this->cases[largeur * hauteur] = new Case();

	genererCases();
}

void Grille::genererCases() {
	for (int x = 0; x < largeur; x++) {
		for (int y = 0; y < hauteur; y++) {
			cases[Coordonnee::toIndex(x, y, largeur)] = new Case();
		}
	}
}

bool Grille::positionnerPion(Coordonnee* coordonnee, Pion* pion) {
	return cases[coordonnee->toIndex()]->setPion(pion);
}

int Grille::getLargeur() {
	return largeur;
}

int Grille::getHauteur() {
	return hauteur;
}

bool Grille::remplie() {
	for (int indexCase = 0; indexCase < largeur * hauteur; indexCase++) {
		if (!cases[indexCase]->getPion()) {
			return false;
		}
	}

	return true;
}
