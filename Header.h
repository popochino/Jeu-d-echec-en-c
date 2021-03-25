#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille_max  3
#define taille_max2  50
#define ligne  8
#define colonne  8
					/*gestion de la couleur*/
struct echiquier				/*constitution d'une case*/
{
	char nom_piece[taille_max];
};
struct echiquier plateau[ligne][colonne];	/*plateau de jeu*/
void nouveaujeu();
void Option();
void initialisation();				/*initialisation des pièces*/
void affichage();
int droit(int x, int y, int xd, int yd, float reste, char piece[2], int
type);
int echecnoir();
int echecblanc();


#endif // HEADER_H_INCLUDED
