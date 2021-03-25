#include "Header.h"


void nouveaujeu()
{
int mate=0, option=-1, a, b, x, y, xd, yd, i, r, m, comp1, comp2, comp3, comp4, comp5, type, verif, test1, test2, numechec=0;
float reste;
int c=0;
char piece[3], coup[8], ok[2], chess[2], vide[2];

	for( a=0; a<8; a++)
	{
		for (b=0; b<8; b++)
		{
			test1=strcmp(plateau[a][b].nom_piece, "00")==0;
			if (test1)
			{
				strcpy(plateau[a][b].nom_piece, "  ");
			}
		}
	}
	while(!mate)
	{
		c++;
		reste=c%2;
		system ("CLS");		/*efface l'ecran*/
		affichage();
		for (i=0;i<5;i++) /*remet a 0 la variable du coup ecoule*/
		{
			coup[i]=0;
		}
		printf("\n///////////////////////////////////////////////////////////////////////////////////");
		printf("\n\tPour savoir comment bouger les pieces, aller dans le menu option\n");
		printf("\tPour visualiser le menu d'option, taper \"O\"");

		if (reste!=0)
		{
			printf("\n\t--> Vous jouez avec les noirs");
		}
		else
		{
			printf("\n\t--> Vous jouez avec les blancs");
		}

		printf("\n\tQue jouez vous?");
		scanf("%s",coup);
		option=(strcmp(coup,"O")==0);
		if (!option)
		{
			type=coup[3];
			if (reste!=0)
			{		/*detection de la piece	utilisee*/
				if (coup[0]==112) strcpy(piece,"pn"); 	/*ici un pion*/
				else if (coup[0]==84) strcpy(piece,"Tn");	/*ici une tour*/
				else if (coup[0]==67) strcpy(piece,"Cn");	/*ici un cavalier*/
				else if (coup[0]==70) strcpy(piece,"Fn");	/*ici un fou*/
				else if (coup[0]==68) strcpy(piece,"Dn");	/*ici une dame*/
				else if (coup[0]==82) strcpy(piece,"Rn");	/*ici un roi*/
				else if (coup[1]==48) 				/*ici les roques*/
				{
					if (coup[2]==48) 	  		/*ici le grand roque*/
					{
						strcpy(piece,"000");
					}
					else
					{
						strcpy(piece,"00"); 			/*ici le petit roque*/
					}
				}
			}
			else
			{
				if (coup[0]==112) strcpy(piece,"pb"); 	/*ici un pion*/
				else if (coup[0]==84) strcpy(piece,"Tb");	/*ici une tour*/
				else if (coup[0]==67) strcpy(piece,"Cb");	/*ici un cavalier*/
				else if (coup[0]==70) strcpy(piece,"Fb");	/*ici un fou*/
				else if (coup[0]==68) strcpy(piece,"Db");	/*ici une dame*/
				else if (coup[0]==82) strcpy(piece,"Rb");	/*ici un roi*/
				else if (coup[1]==48) 				/*ici les roques*/
				{
					if (coup[2]==48) 	  		/*ici le grand roque*/
					{
						strcpy(piece,"000");
					}
					else
					{
						strcpy(piece,"00"); 			/*ici le petit roque*/
					}
				}
			}
			printf("piece = %s\n", piece);
			if (type==45)
			{
				xd=coup[2]-49;		/*xd de depart*/
				yd=coup[1]-97;		/*yd de depart*/
				x=coup[5]-49;		/*x d'arrivee*/
				y=coup[4]-97;		/*y d'arrivee*/
			}
			else if (type==120)
			{						/*si le deuxieme caractere est x*/
				xd=coup[2]-49;		/*xd de depart*/
				yd=coup[1]-97;		/*yd de depart*/
				x=coup[5]-49;		/*x d'arrivee*/
				y=coup[4]-97;		/*y d'arrivee*/
			}
			if(type==45 || type==120)
			{
				if(reste!=0)
				{
					if (plateau[xd][yd].nom_piece[1]==110)
					{
						verif=(strcmp(plateau[xd][yd].nom_piece,"  ")==0);
						if (x>-1 && x<8 && y>-1 && y<8 && xd>-1 && xd<8 && yd>-1 && yd<8 && !verif)
						{
							test2=0;
							while(!test2)
							{
								printf("deplacement de la piece de (%d, %d) en (%d, %d) - O / N ?", xd, yd, x, y);
								scanf("%s",ok);
								if((ok[0]==79)||(ok[0]==78))
								{
									test2=1;
								}
							}
							if (ok[0]==79)
							{
								r=droit(x, y, xd, yd, reste, piece, type);
								if (r==1)
								{
									strcpy(plateau[x][y].nom_piece,piece);
									strcpy(plateau[xd][yd].nom_piece,"  ");
									m=echecblanc();
									if (m==0)
									{
										m=echecnoir();
										if (m==0)
										{
											numechec=0;
											printf("Il n'y a pas d'echec\n");
											printf("Tapez sur n'importe qu'elle touche !\n");
											scanf("%s",chess);
										}
										else
										{
											numechec=0;
											printf("Les blancs sont echecs !\n");
											printf("Tapez sur n'importe qu'elle touche !\n");
											scanf("%s",chess);
										}
									}
									else
									{
										numechec++;
										if (numechec<3)
										{
											c--;
											strcpy(plateau[xd][yd].nom_piece,piece);
											strcpy(plateau[x][y].nom_piece,"  ");
											printf("Vous etes echec! c'est un mouvement impossible !\n");
										}
										else if (numechec>2)
										{
											printf("Vous etes echec et mate !\n");
											mate=1;
										}
										printf("Tapez sur n'importe qu'elle touche !\n");
										scanf("%s",chess);
										if (numechec>2)
										{
											main();
										}
									}
								}
								else
								{
									c--;		/*cela permet au meme joueur de rejouer*/
									printf("Coup invalide\n");
									printf("Tapez sur n'importe qu'elle touche !\n");
									scanf("%s",chess);
								}
							}
							else if(ok[0]==78)
							{
								c--;			/*cela permet au meme joueur de rejouer*/
								printf("Vous pouvez choisir un autre coup\n");
								printf("Tapez sur n'importe qu'elle touche !\n");
								scanf("%s",chess);
							}
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Vous vous etes trompe de coordonnees!\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
					else
					{
						c--;				/*cela permet au meme joueur de rejouer*/
						printf("Vous jouez avec les noirs !\n");
						printf("Tapez sur n'importe qu'elle touche !\n");
						scanf("%s",vide);
						scanf("%s",chess);
					}
				}
				else
				{
					if (plateau[xd][yd].nom_piece[1]==98)
					{
						verif=(strcmp(plateau[xd][yd].nom_piece,"  ")==0);
						if (x>-1 && x<8 && y>-1 && y<8 && xd>-1 && xd<8 && yd>-1 && yd<8 && !verif)
						{
							test2=0;
							while(!test2)
							{
								printf("deplacement de la piece de (%d, %d) en (%d, %d) - O / N ?",xd, yd, x, y);
								scanf("%s",ok);
								if((ok[0]==79)||(ok[0]==78))
								{
									test2=1;
								}
							}
							if (ok[0]==79)
							{
								r=droit(x, y, xd, yd, reste, piece, type);
								if (r==1)
								{
									strcpy(plateau[x][y].nom_piece,piece);
									strcpy(plateau[xd][yd].nom_piece,"  ");
									m=echecnoir();
									if (m==0)
									{
										m=echecblanc();
										if (m==0)
										{
											numechec=0;
											printf("Il n'y a pas d'echec !\n");
											printf("Tapez sur n'importe qu'elle touche !\n");
											scanf("%s",chess);
										}
										else
										{
											numechec=0;
											printf("Les noirs sont echecs !\n");
											printf("Tapez sur n'importe qu'elle touche !\n");
											scanf("%s",chess);
										}
									}
									else
									{
										numechec++;
										if (numechec<3)
										{
											c--;
											strcpy(plateau[xd][yd].nom_piece,piece);
											strcpy(plateau[x][y].nom_piece,"  ");
											printf("Vous etes echec! c'est un mouvement impossible !\n");
										}
										else if (numechec>2)
										{
											printf("Vous etes echec et mate ! \n");
											mate=1;
										}
										printf("Tapez sur n'importe qu'elle touche !\n");
										scanf("%s",chess);
										if (numechec>2)
										{
											main();
										}
									}
								}
								else
								{
									c--;		/*cela permet au meme joueur de rejouer*/
									printf("Coup invalide\n");
									printf("Tapez sur n'importe qu'elle touche !\n");
									scanf("%s",chess);
								}
							}
							else if(ok[0]==78)
							{
								c--;			/*cela permet au meme joueur de rejouer*/
								printf("Vous pouvez choisir un autre coup\n");
								printf("Tapez sur n'importe qu'elle touche !\n");
								scanf("%s",chess);
							}
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Vous vous etes trompe de coordonnees!\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
					else
					{
						c--;				/*cela permet au meme joueur de rejouer*/
						printf("Vous jouez avec les blancs !\n");
						printf("Tapez sur n'importe qu'elle touche !\n");
						scanf("%s",vide);
						scanf("%s",chess);
					}
				}
			}
			else if(piece[0]==48)
			{
				if(piece[2]==48)
				{
					if (reste!=0)
					{
						comp1=(strcmp(plateau[7][4].nom_piece,"Rn")==0);
						comp2=(strcmp(plateau[7][3].nom_piece,"  ")==0);
						comp3=(strcmp(plateau[7][2].nom_piece,"  ")==0);
						comp4=(strcmp(plateau[7][1].nom_piece,"  ")==0);
						comp5=(strcmp(plateau[7][0].nom_piece,"Tn")==0);
						if (comp1 && comp2 && comp3 && comp4 && comp5)
						{
							strcpy(plateau[7][3].nom_piece,"Tn");
							strcpy(plateau[7][2].nom_piece,"Rn");
							strcpy(plateau[7][4].nom_piece,"  ");
							strcpy(plateau[7][0].nom_piece,"  ");
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Le roque est impossible !\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
					else
					{
						comp1=(strcmp(plateau[0][4].nom_piece,"Rn")==0);
						comp2=(strcmp(plateau[0][3].nom_piece,"  ")==0);
						comp3=(strcmp(plateau[0][2].nom_piece,"  ")==0);
						comp4=(strcmp(plateau[0][1].nom_piece,"  ")==0);
						comp5=(strcmp(plateau[0][0].nom_piece,"Tn")==0);
						if (comp1 && comp2 && comp3 && comp4 && comp5)
						{
							strcpy(plateau[0][3].nom_piece,"Tb");
							strcpy(plateau[0][2].nom_piece,"Rb");
							strcpy(plateau[0][4].nom_piece,"  ");
							strcpy(plateau[0][0].nom_piece,"  ");
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Le roque est impossible !\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
				}
				else if(piece[1]==48)
				{
					if (reste!=0)
					{
						comp1=(strcmp(plateau[7][4].nom_piece,"Rn")==0);
						comp2=(strcmp(plateau[7][5].nom_piece,"  ")==0);
						comp3=(strcmp(plateau[7][6].nom_piece,"  ")==0);
						comp4=(strcmp(plateau[7][7].nom_piece,"Tn")==0);
						if (comp1 && comp2 && comp3 && comp4)
						{
							strcpy(plateau[7][5].nom_piece,"Tn");
							strcpy(plateau[7][6].nom_piece,"Rn");
							strcpy(plateau[7][4].nom_piece,"  ");
							strcpy(plateau[7][7].nom_piece,"  ");
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Le roque est impossible !\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
					else
					{
						comp1=(strcmp(plateau[0][4].nom_piece,"Rn")==0);
						comp2=(strcmp(plateau[0][5].nom_piece,"  ")==0);
						comp3=(strcmp(plateau[0][6].nom_piece,"  ")==0);
						comp4=(strcmp(plateau[0][7].nom_piece,"Tn")==0);
						if (comp1 && comp2 && comp3 && comp4)
						{
							strcpy(plateau[0][5].nom_piece,"Tb");
							strcpy(plateau[0][6].nom_piece,"Rb");
							strcpy(plateau[0][4].nom_piece,"  ");
							strcpy(plateau[0][7].nom_piece,"  ");
						}
						else
						{
							c--;				/*cela permet au meme joueur de rejouer*/
							printf("Le roque est impossible !\n");
							printf("Tapez sur n'importe qu'elle touche !\n");
							scanf("%s",chess);
						}
					}
				}
			}
			else
			{
				c--;				/*cela permet au meme joueur de rejouer*/
				printf("Vous vous etes trompe de coordonnees!\n");
				printf("Tapez sur n'importe qu'elle touche !\n");
				scanf("%s",chess);
			}
		}
		else
		{
			Option();
			break;
		}
	}
}
