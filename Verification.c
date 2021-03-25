#include "Header.h"

int droit(int x, int y, int xd, int yd, float reste, char piece[2], int type)
{
int droits, c, a , b, i, t=0, j, r=0, depart, e, f, calcul=0, verif1, verif2;
	if (type==45)
	{
		if(piece[0]==112)				/*pion*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (yd==y)
				{
					verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
					if (verif1)
					{
						depart=x-1;
						for (i=depart; i>xd; i--)
						{
							verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
							if(!verif2)
							{
								calcul=calcul+1;
							}
						}
						if (calcul==0)
						{
							if (xd==1)
							{
								if (x-xd==1 || x-xd==2)
								{
									droits=1;
									return droits;
								}
							}
							else if (x-xd==1)
							{
								droits=1;
								return droits;
							}
						}
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (yd==y)
				{
					verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
					if (verif1)
					{
						depart=x+1;
						for (i=depart; i<xd; i++)
						{
							verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
							if(!verif2)
							{
								calcul=calcul+1;
							}
						}
						if (calcul==0)
						{
							if (xd==6)
							{
								if (xd-x==1 || xd-x==2)
								{
									droits=1;
									return droits;
								}
							}
							else if (xd-x==1)
							{
								droits=1;
								return droits;
							}
						}
					}
				}
			}
		}
		if(piece[0]==82)				/*roi*/
		{
			if(piece[1]==110 || piece[1]==98)			/*noir et blanc*/
			{
				verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
				if (verif1)
				{
					if (xd-x==1 || x-xd==1 || yd-y==1 || y-yd==1)
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		else if(piece[0]==68)				/*dame*/
		{
			if(piece[1]==110 || piece[1]==98)			/*noir et blanc*/
			{
				verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
				if (verif1)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}						}
						}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=y-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if((x-xd==yd-y)||(x-xd==y-yd))
					{
						if (x>xd)
						{
							t=x-xd;
						}
						else
						{
							t=xd-x;
						}
						for (i=1; i<t; i++)
						{
							if (x<xd && y>yd)
							{
								e=xd-i;
								f=yd+i;
							}
							else if(x<xd && y<yd)
							{
								e=xd-i;
								f=yd-i;
							}
							else if (x>xd && y>yd)
							{
								e=xd+i;
								f=yd+i;
							}
							else if(x>xd && y<yd)
							{
								e=xd+i;
								f=yd-i;
							}
							verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
							if(!verif2)
							{
								calcul=calcul+1;
							}
						}
					}
					if (calcul==0)
					{
						if (x==xd || y==yd || (x-xd==yd-y) || (x-xd==y-yd))
						{
							droits=1;
							return droits;
						}
					}
				}
			}
		}
		else if(piece[0]==84)				/*tour*/
		{
			if(piece[1]==110 || piece[1]==98)			/*noir et blanc*/
			{
				verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
				if (verif1)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=y-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					if (calcul==0)
					{
						if ((x==xd)||(y==yd))
						{
							droits=1;
							return droits;
						}
					}

				}
			}
		}
		else if(piece[0]==67)				/*cavalier*/
		{
			if(piece[1]==110 || piece[1]==98)			/*noir et blanc*/
			{
				verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
				if (verif1)
				{
					if (((xd-x==2) && (yd-y==1)) || ((xd-x==2) && (y-yd==1)) || ((x-xd==2) && (yd-y==1)) || ((x-xd==2) && (y-yd==1)) || ((xd-x==1) && (yd-y==2)) || ((xd-x==1) && (y-yd==2)) || ((x-xd==1) && (yd-y==2)) || ((x-xd==1) && (y-yd==2)))	/*noir*/
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		else if(piece[0]==70)				/*fou*/
		{
			if(piece[1]==110 || piece[1]==98)			/*noir et blanc*/
			{
				verif1=(strcmp(plateau[x][y].nom_piece,"  ")==0);
				if (verif1)
				{
					if (x>xd)
					{
						t=x-xd;
					}
					else
					{
						t=xd-x;
					}
					for (i=1; i<t; i++)
					{
						if (x<xd && y>yd)
						{
							e=xd-i;
							f=yd+i;
						}
						else if(x<xd && y<yd)
						{
							e=xd-i;
							f=yd-i;
						}
						else if (x>xd && y>yd)
						{
							e=xd+i;
							f=yd+i;
						}
						else if(x>xd && y<yd)
						{
							e=xd+i;
							f=yd-i;
						}
						verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
						if(!verif2)
						{
							calcul=calcul+1;
						}
					}

					if (calcul==0)
					{
						if((x-xd==yd-y)||(x-xd==y-yd))
						{
							droits=1;
							return droits;
						}
					}
				}
			}
		}
	}
	else if (type==120)
	{
		if(piece[0]==112)				/*pion*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if ((x-xd==1 && y-yd==1)||(x-xd==1 && yd-y==1))
					{
						droits=1;
						return droits;
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if ((xd-x==1 && y-yd==1)||(xd-x==1 && yd-y==1))
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		if(piece[0]==82)				/*roi*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if ((xd-x==1) || (x-xd==1) || (yd-y==1) || (y-yd==1))
					{
						droits=1;
						return droits;
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if ((xd-x==1) || (x-xd==1) || (yd-y==1) || (y-yd==1))
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		else if(piece[0]==68)				/*dame*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=y-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if((x-xd==yd-y)||(x-xd==y-yd))
					{
						if (x>xd)
						{
							t=x-xd;
						}
						else
						{
							t=xd-x;
						}
						for (i=1; i<t; i++)
						{
							if (x<xd && y>yd)
							{
								e=xd-i;
								f=yd+i;
							}
							else if(x<xd && y<yd)
							{
								e=xd-i;
								f=yd-i;
							}
							else if (x>xd && y>yd)
							{
								e=xd+i;
								f=yd+i;
							}
							else if(x>xd && y<yd)
							{
								e=xd+i;
								f=yd-i;
							}
							verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
							if(!verif2)
							{
								calcul=calcul+1;
							}
						}
					}
					if (calcul==0)
					{
						droits=1;
						return droits;
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=y-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if((x-xd==yd-y)||(x-xd==y-yd))
					{
						if (x>xd)
						{
							t=x-xd;
						}
						else
						{
							t=xd-x;
						}
						for (i=1; i<t; i++)
						{
							if (x<xd && y>yd)
							{
								e=xd-i;
								f=yd+i;
							}
							else if(x<xd && y<yd)
							{
								e=xd-i;
								f=yd-i;
							}
							else if (x>xd && y>yd)
							{
								e=xd+i;
								f=yd+i;
							}
							else if(x>xd && y<yd)
							{
								e=xd+i;
								f=yd-i;
							}
							verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
							if(!verif2)
							{
								calcul=calcul+1;
							}
						}
					}
					if (calcul==0)
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		else if(piece[0]==84)				/*tour*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						if (calcul==0)
						{
							droits=1;
							return droits;
						}
					}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=y-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					if (calcul==0)
					{
						if (x==xd || y==yd)
						{
							droits=1;
							return droits;
						}
					}
				}
			}
			else if(piece[1]==110)
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if(y==yd)
					{
						if (x<xd)
						{
							depart=x+1;
							for (i=depart; i<xd; i++)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(x>xd)
						{
							depart=x-1;
							for (i=depart; i>xd; i--)
							{
								verif2=(strcmp(plateau[i][yd].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					else if(x==xd)
					{
						if (y<yd)
						{
							depart=y+1;
							for (i=depart; i<yd; i++)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
						else if(y>yd)
						{
							depart=x-1;
							for (i=depart; i>yd; i--)
							{
								verif2=(strcmp(plateau[xd][i].nom_piece,"  ")==0);
								if(!verif2)
								{
									calcul=calcul+1;
								}
							}
						}
					}
					if (calcul==0)
					{
						if (x==xd || y==yd)
						{
							droits=1;
							return droits;
						}
					}
				}
			}
		}
		else if(piece[0]==67)				/*cavalier*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if (((xd-x==2) && (yd-y==1)) || ((xd-x==2) && (y-yd==1)) || ((x-xd==2) && (yd-y==1)) || ((x-xd==2) && (y-yd==1)) || ((xd-x==1) && (yd-y==2)) || ((xd-x==1) && (y-yd==2)) || ((x-xd==1) && (yd-y==2)) || ((x-xd==1) && (y-yd==2)))	/*noir*/
					{
						droits=1;
						return droits;
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if (((xd-x==2) && (yd-y==1)) || ((xd-x==2) && (y-yd==1)) || ((x-xd==2) && (yd-y==1)) || ((x-xd==2) && (y-yd==1)) || ((xd-x==1) && (yd-y==2)) || ((xd-x==1) && (y-yd==2)) || ((x-xd==1) && (yd-y==2)) || ((x-xd==1) && (y-yd==2)))	/*noir*/
					{
						droits=1;
						return droits;
					}
				}
			}
		}
		else if(piece[0]==70)				/*fou*/
		{
			if(piece[1]==98)			/*blanc*/
			{
				if (plateau[x][y].nom_piece[1]==110)
				{
					if (x>xd)
					{
						t=x-xd;
					}
					else
					{
						t=xd-x;
					}
					for (i=1; i<t; i++)
					{
						if (x<xd && y>yd)
						{
							e=xd-i;
							f=yd+i;
						}
						else if(x<xd && y<yd)
						{
							e=xd-i;
							f=yd-i;
						}
						else if (x>xd && y>yd)
						{
							e=xd+i;
							f=yd+i;
						}
						else if(x>xd && y<yd)
						{
							e=xd+i;
							f=yd-i;
						}
						verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
						if(!verif2)
						{
							calcul=calcul+1;
						}
					}
					if (calcul==0)
					{
						if((x-xd==yd-y)||(x-xd==y-yd))
						{
							droits=1;
							return droits;
						}
					}
				}
			}
			else if(piece[1]==110)			/*noir*/
			{
				if (plateau[x][y].nom_piece[1]==98)
				{
					if (x>xd)
					{
						t=x-xd;
					}
					else
					{
						t=xd-x;
					}
					for (i=1; i<t; i++)
					{
						if (x<xd && y>yd)
						{
							e=xd-i;
							f=yd+i;
						}
						else if(x<xd && y<yd)
						{
							e=xd-i;
							f=yd-i;
						}
						else if (x>xd && y>yd)
						{
							e=xd+i;
							f=yd+i;
						}
						else if(x>xd && y<yd)
						{
							e=xd+i;
							f=yd-i;
						}
						printf("%d",i);
						verif2=(strcmp(plateau[e][f].nom_piece,"  ")==0);
						printf("%d",verif2);
						if(!verif2)
						{
							calcul=calcul+1;
							printf("%d",calcul);
						}
					}
					if (calcul==0)
					{
						if((x-xd==yd-y)||(x-xd==y-yd))
						{
							droits=1;
							return droits;
						}
					}
				}
			}
		}
	}
}
