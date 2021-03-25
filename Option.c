#include "Header.h"

void Option()
{
int choix=-1;
char vide[2], retour[2];

	system ("CLS");		/*efface l'ecran*/
	printf("--------Menu Options-------\n");
	printf("-1- Retour au menu principal\n");
	printf("-2- Regles du jeu\n");
	printf("-3- Aide pour les mouvements de pieces\n");

	printf("Choix: ");
	scanf("%d",&choix);
	switch (choix)
	{
		case 1 :main();
			break;
		case 2 :printf("Le joueur ayant les Blancs commence, puis chaque joueur effectue un coup à tour de role.\nLorsqu’un Roi est attaqué par une piece adverse, on dit qu’il est en échec. Un joueur n’a pas le droit de laisser son Roi en échec. Il doit parer l’echec en prenant la pièce qui attaque le Roi, en déplaçant son Roi ou en interposant une pièce entre son Roi et l’attaquant.\nLe joueur qui fait echec peut l’annoncer en disant « echec », mais cette annonce n’est pas obligatoire.\nUn joueur n’a pas le droit de deplacer son Roi sur une case ou il serait en échec.\nLe but du jeu est de mettre le Roi du joueur adverse en echec de telle façon que l’echec ne puisse pas être pare : on dit que ce joueur est echec et mat.");
			printf("\n--> Pour revenir au menu Option, tapez sur n'importe qu'elle touche : \n");
			scanf("%s",retour);
			Option();
			break;
		case 3 :system ("CLS");
			printf("\n\tPour un deplacement : \"pa7-a5\"");
			printf("\n\tPour une prise : \"pa7xa5\"");
			printf("\n\tPour le petit roque : \"00\"");
			printf("\n\tPour le grand roque : \"000\"");
			printf("\n--> Pour revenir dans le menu Option, tapez sur O");
			printf("\n--> Pour commencer ou reprendre votre partie, tapez sur n'importe qu'elle touche \n");
			printf("Choix: ");
			scanf("%s",retour);
			nouveaujeu();
			break;
		default :printf("Erreur de saisie\n");
			 printf("Tapez sur n'importe qu'elle touche !\n");
			 scanf("%s",vide);
			 scanf("%s",retour);
			 main();
			 break;
	}
}
