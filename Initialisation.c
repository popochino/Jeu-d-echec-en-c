#include "Header.h"

void initialisation()
{
int a, b;
	for (a=0;a<8;a++)
		for (b=0;b<8;b++)
			strcpy(plateau[a][b].nom_piece,"  ");/*Remise à zero de l'echiquier*/

	for (b=0;b<8;b++)
		{
		strcpy(plateau[1][b].nom_piece,"pb");
		strcpy(plateau[6][b].nom_piece,"pn");
		}
    /*declaration de depart des blancs et des noirs*/
    /*la piece 1 est un pion blanc, la piece 7 un pion noir*/
	strcpy(plateau[0][0].nom_piece,"Tb"); 	/*Tour blanche*/
	strcpy(plateau[0][7].nom_piece,"Tb");	 /*Tour blanche*/
	strcpy(plateau[0][1].nom_piece,"Cb");	 /*Cavalier blanc*/
	strcpy(plateau[0][6].nom_piece,"Cb");	 /*Cavalier blanc*/
	strcpy(plateau[0][2].nom_piece,"Fb");	 /*Fou blanc*/
	strcpy(plateau[0][5].nom_piece,"Fb");	 /*Fou blanc*/
	strcpy(plateau[0][3].nom_piece,"Db");	 /*Dame blanc*/
	strcpy(plateau[0][4].nom_piece,"Rb");    /*Roi blanc*/
	strcpy(plateau[7][0].nom_piece,"Tn");	 /*Tour noir*/
	strcpy(plateau[7][7].nom_piece,"Tn");	 /*Tour noir*/
	strcpy(plateau[7][1].nom_piece,"Cn");	 /*Cavalier noir*/
	strcpy(plateau[7][6].nom_piece,"Cn");	 /*Cavalier noir*/
	strcpy(plateau[7][2].nom_piece,"Fn");	 /*Fou noir*/
	strcpy(plateau[7][5].nom_piece,"Fn");	 /*Fou noir*/
	strcpy(plateau[7][3].nom_piece,"Dn");	 /*Dame noir*/
	strcpy(plateau[7][4].nom_piece,"Rn");	 /*Roi noir*/
}
