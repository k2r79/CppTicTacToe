#include "Jeu.h"
#include <cstdlib>

Jeu::Jeu(int nombreJoueurs) {
	std::cout << "Création des joueurs...\n";

	for (int i = 0; i < nombreJoueurs; i++) {
		joueurs.push_back(new Joueur(i, 3));
	}

	grille = new Grille(3, 3);
	gagnant = NULL;
}

void Jeu::start() {
	std::cout << "Début du jeu...\n";

	int joueurIndex = 0;
	while (!jeuFini()) {
		std::cout << "Joueur " << joueurIndex + 1 << " | " << joueurs.at(joueurIndex)->getNbPions() << " pions\n";

		Pion* pionJoueur = joueurs.at(joueurIndex)->popPion();
		Coordonnee* coordonneesJoueur;
		do {
			coordonneesJoueur = joueurs.at(joueurIndex)->jouer(grille->getLargeur(), grille->getHauteur());
			std::cout << "  Position => (" << coordonneesJoueur->getX() << " : " << coordonneesJoueur->getY() << ") => " << coordonneesJoueur->toIndex() << "\n";
		} while (!grille->positionnerPion(coordonneesJoueur, pionJoueur));

		if (checkGagnant(coordonneesJoueur, joueurs.at(joueurIndex)->getValeur())) {
			gagnant = joueurs.at(joueurIndex);
		}

		joueurIndex = ++joueurIndex % joueurs.size();
	}

	std::cout << "Jeu terminé !\n";
	std::cout << "Le gagnant est le joueur N°" << gagnant->getValeur() + 1 << "\n";
}

bool Jeu::jeuFini() {
	return grille->remplie() || gagnant;
}

bool Jeu::checkGagnant(Coordonnee* coordonneeJoueur, int valeurJoueur) {
	return checkColonne(coordonneeJoueur, valeurJoueur)
			|| checkLigne(coordonneeJoueur, valeurJoueur);
}

bool Jeu::checkColonne(Coordonnee* coordonneeJoueur, int valeurJoueur) {
	int nombrePions;
	for (int i = 0; i < grille->getLargeur() && nombrePions < grille->getHauteur(); i++) {
		nombrePions = 0;

		Coordonnee* coordonnee = new Coordonnee(coordonneeJoueur->getX(), i, grille->getLargeur());

		Pion* pionCase = grille->getPionAt(coordonnee);
		if (pionCase) {
			int valeurCase = pionCase->getValeur();
			if (valeurCase == valeurJoueur) {
				nombrePions++;
			}
		}
	}

	return nombrePions == grille->getHauteur() ? true : false;
}

bool Jeu::checkLigne(Coordonnee* coordonneeJoueur, int valeurJoueur) {
	int nombrePions;
	for (int i = 0; i < grille->getHauteur() && nombrePions < grille->getLargeur(); i++) {
		nombrePions = 0;

		Coordonnee* coordonnee = new Coordonnee(i, coordonneeJoueur->getY(), grille->getLargeur());

		Pion* pionCase = grille->getPionAt(coordonnee);
		if (pionCase) {
			int valeurCase = pionCase->getValeur();
			if (valeurCase == valeurJoueur) {
				nombrePions++;
			}
		}
	}

	return nombrePions == grille->getLargeur() ? true : false;
}



