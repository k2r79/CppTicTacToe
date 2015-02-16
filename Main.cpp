#include <stdio.h>

#include "Jeu.h"

int main( int argc, const char* argv[] )
{
	Jeu* jeu = new Jeu(2);
	jeu->start();
}
