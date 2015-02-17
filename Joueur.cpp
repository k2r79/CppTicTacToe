#include "Joueur.h"

Joueur::Joueur(int valeur, int nombrePions) {
	for (int i = 0; i < nombrePions; i++) {
		pions.push(new Pion(valeur));
	}

	this->valeur = valeur;
}

Coordonnee* Joueur::jouer(int largeur, int hauteur) {
	return new Coordonnee(rand() % largeur, rand() % hauteur, largeur);
}

Pion* Joueur::popPion() {
	Pion* frontPion = pions.front();
	pions.pop();

	return frontPion;
}

int Joueur::getNbPions() {
	return pions.size();
}

int Joueur::getValeur() {
	return valeur;
}

