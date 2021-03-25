#include "Header.h"

int echecblanc()
{
int i, e, f, a, b, calcul, depart, echec=0, xroi, yroi, comp1, comp2;

	for (a=0;a<8;a++)
	{
		for (b=0;b<8;b++)
		{
			if (plateau[a][b].nom_piece[0]==82)
			{
				if (plateau[a][b].nom_piece[1]==110)
				{
					xroi=a;
					yroi=b;
					break;
				}
			}
		}
	}
	printf("Le roi noir est en(%d, %d)\n", xroi, yroi);
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"pb")==0);
	if (e>0 && f<7 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un pion blanc...\n");
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"pb")==0);
	if (e>0 && f>0 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un pion blanc...\n");
	}
	e=xroi+1;
	f=yroi+2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e<7 && f<6 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi+1;
	f=yroi-2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e<7 && f>1 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi-1;
	f=yroi+2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e>0 && f<6 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi-1;
	f=yroi-2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e>0 && f>1 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi+2;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e<6 && f<7 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi+2;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e<6 && f>0 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi-2;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e>1 && f<7 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi-2;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cb")==0);
	if (e>1 && f>0 && comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier blanc...\n");
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi-1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi+1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Rn")==0);
	if (comp1)
	{
		echec=1;
		printf("Vos deux rois seraient colles...\n");
	}
	e=xroi-1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour blanche...\n");
	}
	while (e>-1 && comp1)
	{
		e--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour blanche...\n");
		}
	}
	e=xroi;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour blanche...\n");
	}
	while (f>-1 && comp1)
	{
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour blanche...\n");
		}
	}
	e=xroi+1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour blanche...\n");
	}
	while (e<8 && comp1)
	{
		e++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour blanche...\n");
		}
	}
	e=xroi;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour blanche...\n");
	}
	while (f<8 && comp1)
	{
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour blanche...\n");
		}
	}
	e=xroi-1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e>-1 && comp1)
	{
		e--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (f>-1 && comp1)
	{
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi+1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e<8 && comp1)
	{
		e++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (f<8 && comp1)
	{
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e<8 && f<8 && comp1)
	{
		e++;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e<8 && f>-1 && comp1)
	{
		e++;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e>-1 && f<8 && comp1)
	{
		e--;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame blanche...\n");
	}
	while (e>-1 && f>-1 && comp1)
	{
		e--;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Db")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame blanche...\n");
		}
	}
	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou blanc...\n");
	}
	while (e<8 && f<8 && comp1)
	{
		e++;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou blanc...\n");
		}
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou blanc...\n");
	}
	while (e<8 && f>-1 && comp1)
	{
		e++;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou blanc...\n");
		}
	}
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou blanc...\n");
	}
	while (e>-1 && f<8 &&  comp1)
	{
		e--;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou blanc...\n");
		}
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou blanc...\n");
	}
	while (e>-1 && f>-1 &&  comp1)
	{
		e--;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fb")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou blanc...\n");
		}
	}
	return echec;
}
