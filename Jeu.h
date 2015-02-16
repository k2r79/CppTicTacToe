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
		Grille *grille;
		bool jeuFini();
};

#endif /* JEU_H_ */
