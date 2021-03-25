#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main()
{
   int choix=-1, test=0;

	system ("CLS");			/*efface l'ecran*/
	printf("Bienvenue sur notre jeu d'echecs\n");
	printf("Cree par Marre-Blanc Helois et Raccah Theo\n\n");
	printf("-------Menu Principal-------\n");
	printf("-1- Nouvelle partie\n");
	printf("-2- Option\n");
	printf("-0- Quitter\n");
	printf("Choix: ");
	scanf("%d",&choix);
	while (choix != 0 && choix != 1 && choix != 2){
        printf("erreur de saisie veuillez recommencer : ");
        scanf("%d",&choix);
	}


	switch (choix)
	{
		case 1 :initialisation();
			//c=0;
			nouveaujeu();
			break;
		case 2 :Option();
			break;
		case 0 :printf("Au revoir\n");
			break;
		default :printf("Erreur de saisie veuillez recommencer \n");
		    main();
		    break;

	}
}
