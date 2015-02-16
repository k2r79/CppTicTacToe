#ifndef COORDONNEE_H_
#define COORDONNEE_H_

class Coordonnee {
	public:
		Coordonnee(int x, int y);
		int toIndex();
		int static toIndex(int x, int y);

	private:
		int x;
		int y;
};

#endif /* COORDONNEE_H_ */
