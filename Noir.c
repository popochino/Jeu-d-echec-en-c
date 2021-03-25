#include "Header.h"

int echecnoir()
{
int i, e, f, a, b, calcul, depart, echec=0, xroi, yroi,comp1, comp2;

	for (a=0;a<8;a++)
	{
		for (b=0;b<8;b++)
		{
			if (plateau[a][b].nom_piece[0]==82)
			{
				if (plateau[a][b].nom_piece[1]==98)
				{
					xroi=a;
					yroi=b;
					break;
				}
			}
		}
	}

	printf("Le roi blanc est en(%d, %d)\n", xroi, yroi);

	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"pn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un pion noir...\n");
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"pn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un pion noir...\n");
	}
	e=xroi+1;
	f=yroi+2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi+1;
	f=yroi-2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi-1;
	f=yroi+2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi-1;
	f=yroi-2;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi+2;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi+2;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi-2;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
	}
	e=xroi-2;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"Cn")==0);
	if (comp1)
	{
		echec=1;
		printf("Un echec detecte par un cavalier noir...\n");
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
	comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour noire...\n");
	}
	while (e>-1 && comp1)
	{
		e--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour noire...\n");
		}
	}
	e=xroi;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour noire...\n");
	}
	while (f>-1 && comp1)
	{
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour noire...\n");
		}
	}
	e=xroi+1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour noire...\n");
	}
	while (e<8 && comp1)
	{
		e++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour noire...\n");
		}
	}
	e=xroi;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une tour noire...\n");
	}
	while (f<8 && comp1)
	{
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Tn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une tour noire...\n");
		}
	}
	e=xroi-1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e>-1 && comp1)
	{
		e--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (f>-1 && comp1)
	{
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi+1;
	f=yroi;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e<8 && comp1)
	{
		e++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (f<8 && comp1)
	{
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e<8 && f<8 && comp1)
	{
		e++;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e<8 && f>-1 && comp1)
	{
		e++;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e>-1 && f<8 && comp1)
	{
		e--;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par une dame noire...\n");
	}
	while (e>-1 && f>-1 && comp1)
	{
		e--;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Dn")==0);
		if (comp2){
			echec=1;
			printf("Un echec detecte par une dame noire...\n");
		}
	}
	e=xroi+1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou noir...\n");
	}
	while (e<8 && f<8 && comp1)
	{
		e++;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou noir...\n");
		}
	}
	e=xroi+1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou noir...\n");
	}
	while (e<8 && f>-1 && comp1)
	{
		e++;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou noir...\n");
		}
	}
	e=xroi-1;
	f=yroi+1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou noir...\n");
	}
	while (e>-1 && f<8 &&  comp1)
	{
		e--;
		f++;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou noir...\n");
		}
	}
	e=xroi-1;
	f=yroi-1;
	comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
	comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
	if (comp2)
	{
		echec=1;
		printf("Un echec detecte par un fou noir...\n");
	}
	while (e>-1 && f>-1 &&  comp1)
	{
		e--;
		f--;
		comp1=(strcmp(plateau[e][f].nom_piece,"  ")==0);
		comp2=(strcmp(plateau[e][f].nom_piece,"Fn")==0);
		if (comp2)
		{
			echec=1;
			printf("Un echec detecte par un fou noir...\n");
		}
	}
	return echec;
}
