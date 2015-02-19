#include "Joueur.h"

Joueur::Joueur(int valeur, int nombrePions) {
	for (int i = 0; i < nombrePions; i++) {
		pions.push(new Pion(valeur));
	}

	this->valeur = valeur;
}

Coordonnee* Joueur::jouer(int largeur, int hauteur) {
	return new Coordonnee(Utils::generateRandomInt(0, largeur), Utils::generateRandomInt(0, hauteur));
}

Pion* Joueur::popPion() {
	Pion* topPion = pions.top();
	pions.pop();

	return topPion;
}

int Joueur::getNbPions() {
	return pions.size();
}

int Joueur::getValeur() {
	return valeur;
}

