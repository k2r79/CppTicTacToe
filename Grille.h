#ifndef GRILLE_H_
#define GRILLE_H_

#include <map>
#include <iostream>
#include <string>
#include "Coordonnee.h"
#include "Case.h"
#include "Utils.h"

class Grille {
	public:
		Grille(int largeur, int hauteur);
		int getLargeur();
		int getHauteur();
		bool positionnerPion(Coordonnee* coordonnee, Pion* pion);
		bool remplie();
		Pion* getPionAt(Coordonnee* coordonnee);
		void afficher();

	private:
		int largeur;
		int hauteur;
		Case **cases;
		void genererCases();
};

#endif /* GRILLE_H_ */
