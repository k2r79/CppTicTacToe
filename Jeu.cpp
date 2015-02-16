#include "Jeu.h"

Jeu::Jeu(int nombreJoueurs) {
	std::cout << "Création des joueurs...\n";

	for (int i = 0; i < nombreJoueurs; i++) {
		joueurs.push_back(new Joueur(i, 3));
	}

	grille = new Grille(3, 3);
}

void Jeu::start() {
	std::cout << "Début du jeu...\n";

	while (!jeuFini()) {
		for (int i = 0; i < joueurs.size(); i++) {
			std::cout << "Joueur " << i + 1 << "\n";

			Pion* pionJoueur = joueurs.at(i)->popPion();
			Coordonnee* coordonneesJoueur = 0;
			do {
				coordonneesJoueur = joueurs[i]->jouer(grille->getLargeur(), grille->getHauteur());
			} while (!grille->positionnerPion(coordonneesJoueur, pionJoueur));
		}
	}

	std::cout << "Jeu terminé !\n";
}

bool Jeu::jeuFini() {
	return grille->remplie();
}

