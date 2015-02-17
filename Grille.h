#ifndef GRILLE_H_
#define GRILLE_H_

#include <map>
#include "Coordonnee.h"
#include "Case.h"

class Grille {
	public:
		Grille(int largeur, int hauteur);
		int getLargeur();
		int getHauteur();
		bool positionnerPion(Coordonnee* coordonnee, Pion* pion);
		bool remplie();
		Pion* getPionAt(Coordonnee* coordonnee);

	private:
		int largeur;
		int hauteur;
		Case *cases[];
		void genererCases();
};

#endif /* GRILLE_H_ */
