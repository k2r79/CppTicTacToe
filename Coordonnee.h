#ifndef COORDONNEE_H_
#define COORDONNEE_H_

class Coordonnee {
	public:
		Coordonnee(int x, int y, int largeur);
		int toIndex();
		int static toIndex(int x, int y, int largeur);
		int getX();
		int getY();

	private:
		int x;
		int y;
		int largeur;
};

#endif /* COORDONNEE_H_ */
