#ifndef JEU_H_
#define JEU_H_

#include <vector>
#include <iostream>
#include <cstdlib>
#include "Joueur.h"
#include "Grille.h"
#include "Coordonnee.h"

class Jeu {
	public:
		Jeu(int nombreJoueurs);
		void start();

	private:
		std::vector<Joueur*> joueurs;
		Joueur* gagnant;
		Grille *grille;
		bool jeuFini();
		bool checkGagnant(Coordonnee* coordonnee, int valeur);
		bool checkColonne(Coordonnee* coordonnee, int valeur);
		bool checkLigne(Coordonnee* coordonnee, int valeur);
		bool checkDiagonaleGauche(int valeur);
		bool checkDiagonaleDroite(int valeur);
};

#endif /* JEU_H_ */
