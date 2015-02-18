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
	if (getPionAt(coordonnee)) {
		return false;
	}

	cases[coordonnee->toIndex()]->setPion(pion);

	return true;
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

Pion* Grille::getPionAt(Coordonnee* coordonnee) {
	return cases[coordonnee->toIndex()]->getPion();
}

void Grille::afficher() {
	std::cout << "\n";

	for (int j = 0; j < largeur; j++) {
		std::cout << "----";
	}

	for (int i = 0; i < hauteur; i++) {
		std::cout << "\n";

		std::cout << "|";
		for (int j = 0; j < largeur; j++) {
			Coordonnee* coordonnee = new Coordonnee(j, i, largeur);
			int valeur = getPionAt(coordonnee) ? getPionAt(coordonnee)->getValeur() : -1;

			std::cout << " " << (valeur == -1 ? " " : Utils::intToString(valeur)) << " |";
		}

		std::cout << "\n";

		for (int j = 0; j < largeur; j++) {
			std::cout << "----";
		}

	}
	std::cout << "\n";

	std::cout << "\n";
	std::cout << "-----";
}
