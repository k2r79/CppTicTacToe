#ifndef JEU_H_
#define JEU_H_

#include <vector>
#include <iostream>
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
		int checkGagnant(Coordonnee* coordonnee, int valeur);
};

#endif /* JEU_H_ */
