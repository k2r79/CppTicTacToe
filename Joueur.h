#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <stdlib.h>
#include <queue>
#include "Pion.h"
#include "Coordonnee.h"

class Joueur {
	public:
		Joueur(int valeur, int nombrePions);
		Coordonnee* jouer(int largeur, int hauteur);
		Pion* popPion();
		int getNbPions();

	private:
		std::queue<Pion*> pions;
};

#endif /* JOUEUR_H_ */
