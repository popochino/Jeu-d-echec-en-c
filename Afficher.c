#include "Header.h"

void affichage()
{
int a, b, c=0, couleur;

	system ("CLS");		/*efface l'ecran*/
	printf("\n\t|--a----b----c----d---e----f----g----h--|\n\t");
	printf("|---------------------------------------|\n\t"); /*Les affichages sont tres basics, seulement des lettres et les coordonnees des cases*/
	for (a=0;a<8;a++)		/*fait varier l'abscisse de 0 a  7 ce qui corespond aux colonnes de 'a' a  'h'*/
	{
		for (b=0;b<8;b++)	/*idem pour l'ordonnee ce qui corespond aux lignes de '1' a  '8'.*/
		{
			c++;
			printf("| %s ",plateau[a][b].nom_piece);
			if ( c % 8 == 0) /*si 8 cases ont ete affichees alors on retourne a la ligne*/
			printf("|%d\n\t|---------------------------------------|\n\t", c/8);
		}
	}
	printf("|--a----b----c----d---e----f----g----h--|\n");
}
