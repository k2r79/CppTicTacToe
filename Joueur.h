#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <stdlib.h>
#include <stack>
#include "Pion.h"
#include "Coordonnee.h"
#include "Utils.h"

class Joueur {
	public:
		Joueur(int valeur, int nombrePions);
		Coordonnee* jouer(int largeur, int hauteur);
		Pion* popPion();
		int getNbPions();
		int getValeur();

	private:
		std::stack<Pion*> pions;
		int valeur;
};

#endif /* JOUEUR_H_ */
