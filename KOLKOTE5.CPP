#include<stdio.h>
#include<conio.h>
#include <stdlib.h>




int wygrana (char table[3][3])
{
	int i, g1 = 0, g2 = 0;
	int j = 0, c = 1;

    int q, w, ca = 0;
	for ( q = 0; q < 3; ++q )
    {
		for ( w = 0; w < 3; ++w )
        {
				if (table[q][w] == ' ')
				// printf("teraz jestem przed powiekszaniem  ++ca i teraz \n ktore jest rowne czyli wynosi %d\n\n",ca);getch();
				++ca;
				//printf("teraz powiekszam ++ca\n ktore jest rowne %d\n\n",ca);getch();
				if ( ca == 10 )
					return 1;
                }
       
	while ( c <= 3 )
	{
		g1 = 0;
		g2 = 0;
		for ( i = 0; i < 3; ++i )            //sprawdza czy gracz wygral//
		{
			if ( table[i][j] == 'x' )
			{
				++g1;
				if ( g1 == 3 )
				{
					printf ("\n\nWygral gracz 1\n");
					return 1;
				}
			}
			//else g1 = 0;
			else if ( table[i][j] == 'o' )
			{
				++g2;
				if ( g2 == 3 )
				{
					printf ("\n\nWygral gracz 2\n");
					return 1;
				}
			}
			//else g2 = 0;
		}
			++c;
			++j;
	}
	i = 0;
	while ( c > 3 && c <= 6 )
	{
		g1 = 0;
		g2 = 0;
		for ( j= 0; j < 3; ++j )            //sprawdza czy gracz wygral//
		{
			if ( table[i][j] == 'x' )
			{
				++g1;
				if ( g1 == 3 )
				{
					printf ("\n\nWygral gracz 1\n");
					return 1;
				}
			}
			//else g1 = 0;
			else if ( table[i][j] == 'o' )
			{
				++g2;
				if ( g2 == 3 )
				{
					printf ("\n\nWygral gracz 2\n");
					return 1;
				}
			}
			//else g2 = 0;
		}
			++c;
			++i;
	}
	while ( c > 6 && c < 8 )
	{
		g1 = 0;
		g2 = 0;
		for ( i = 0,j = 0; i < 3, j < 3; ++i,++j )            //sprawdza czy gracz wygral//
		{
			if ( table[i][j] == 'x' )
			{
				++g1;
				if ( g1 == 3 )
				{
					printf ("\n\nWygral gracz 1\n");
					return 1;
				}
			}
			//else g1 = 0;
			else if ( table[i][j] == 'o' )
			{
				++g2;
				if ( g2 == 3 )
				{
					printf ("\n\nWygral gracz 2\n");
					return 1;
				}
			}
			//else g2 = 0;
		}
			++c;
	}
	while ( c > 7 && c < 9 )
	{
		g1 = 0;
		g2 = 0;
		for ( i = 2,j = 0; i >= 3, j < 3; --i,++j )            //sprawdza czy gracz wygral//
		{
			if ( table[i][j] == 'x' )
			{
				++g1;
				if ( g1 == 3 )
				{
					printf ("\n\nWygral gracz 1\n");
					return 1;
				}
			}
			//else g1 = 0;
			else if ( table[i][j] == 'o' )
			{
				++g2;
				if ( g2 == 3 )
				{
					printf ("\n\nWygral gracz 2\n");
					return 1;
				}
			}
			//else g2 = 0;
		}
			++c;
	}
    }
	return 0;
}

int gra (int gracz, char table[3][3])
{
	clrscr();
	int i, j, k, a;
	int x, y;

	printf ("    x\n");
	printf ("   123");
	k = 0;
	for ( i = 1; i <= 3; ++i )          //wyswietla cala tablice gry//
	{
		if ( i != 2 )
			printf ("\n  %i", i);
		else
			printf ("\ny %i", i);

		for ( j = 0; j < 3; ++j )
			printf ("%c", table[j][k]);
		++k;
	}
	if ( gracz == 1 )
	  {	printf ("\n\n\nGRACZ 1 (x)\n");

	  zlaWsp:
	printf ("\n\Podaj wspolrzedna x i y (x y): ");
	scanf  ("%i %i", &x, &y);
     }

	else
    {
		printf ("\n\n\nGRACZ 2 (o)\n");
     
	zlaWsp2:
	//printf ("\n\Podaj wspolrzedna x i y (x y): ");
	x=random(3)+1 ;
	y=random(3)+1 ;
    }
	if ( (x > 3 || x < 1) || (y > 3 || y < 1) )
	{

		printf ("\nWspolrzedna nie miesci sie w zakresie od 1 do 3\n");
		if(gracz ==1)
        {
		goto zlaWsp;
         }
		 else
		 {goto zlaWsp2;}
         


	}
	else
	{
		if ( table[x-1][y-1] != ' ')
		{
			printf ("\nTo miejsce jest juz zajete");
			goto zlaWsp;
		}
		else
		{
			if ( gracz == 1 )
				table[x-1][y-1] = 'x';
			else
				table[x-1][y-1] = 'o';
		}
		clrscr();
	}
	printf ("    x\n");
	printf ("   123");
	k = 0;
	for ( i = 1; i <= 3; ++i )          //wyswietla cala tablice gry//
	{
		if ( i != 2 )
			printf ("\n  %i", i);
		else
			printf ("\ny %i", i);

		for ( j = 0; j < 3; ++j )
			printf ("%c", table[j][k]);
		++k;
	}
	return table[3][3];
}

int main()
{
	clrscr();

    randomize();

	int i, j, gracz = 1;
	char tablica_gry[3][3];

	for ( i = 0; i < 3; ++i )           //zapisanie do tablicy znaku//
		for ( j = 0; j < 3; ++j )
			tablica_gry[i][j] = ' ';

	while ( wygrana (tablica_gry) != 1 )
	{
	gra (gracz, tablica_gry);

	if ( gracz == 1 )
		gracz = 2;
	else if ( gracz == 2 )
		gracz = 1;
	}
	getch();
	return 0;
}

