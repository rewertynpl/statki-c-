	
			
	//gggg	///juz jest mozliwe ukladanie wszystkich statkow przez gracza i 
	//gggg	// przez komputer .Komputer umie ukladac automatycznie  w widoczny sposub	
						
		
		
		
					
		
#include <stdio.h>

   //	#include <time.h>

#include <stdlib.h>
#include <conio.h>

#define spacja ' '


char planszagr[10][10]={ 
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
			};								
				
char planszakomp[10][10]={ 
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
 spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja, spacja,
			};



int ustaw4_1(char tab[][10],int x1,int y1,int f1,int c2,int komputer55);
				
int ustaw4_2(char tab[][10],int x1,int y1,int f1,int b2,int komputer55);

//void rozstaw(char tab[][10],int a1,int komputer3);

void rozstaw1(char tab1[][10],int b1,int c1,int d1,int f2,int komp);

void czterym(char tab2[][10],int komputer2);

void jednom(char tab2[][10],int komputer2);

void dwam(char tab2[][10],int komputer2);

void trzym(char tab2[][10],int komputer2);

void autoustawianie(int komputer1);

void wyswietlplanszagr(int komputer1);


void poczatek(void);


















int main()
{
	
	clrscr();
	randomize();	

	 poczatek(); //funkcja 

	getch();

	return 0;

}

















//---------------------------------------------------------------------
//FUNKCJA  	    Poczatek ukladania 	       -----------------------
//-----------------               -------------------------------------
//---------------------------------------------------------------------


void poczatek(void)
{



int komputer=0;		
		
	printf("\n\n\tTo jest gra  w statki.\n");	
	printf("\tBedziesz gral przeciwko kumputerowi.\n");	
	printf("\tStatki ukladamy na takiej planszy:\n\n");
			
		wyswietlplanszagr(komputer);  //funkcja wyswietla plansze
			
	getch();
	clrscr();
		



				 // funkcja ustawienia statkow
		autoustawianie(komputer);// funkcja zaczyna ustawienia statkow	


	printf("To jest twoje ulorzenie statkow:\n");

		wyswietlplanszagr(komputer); //funkcja wyswietla plansze


	getch();
	clrscr();



//-----------------------------------------------------------------------

	  komputer=1;	


			
		wyswietlplanszagr(komputer);  //funkcja wyswietla plansze
			
	getch();
	clrscr();
		


				 // funkcja ustawienia statkow
		autoustawianie(komputer);// funkcja zaczyna ustawienia statkow	



		wyswietlplanszagr(komputer); //funkcja wyswietla plansze
          clrscr();
	printf("To jest  ulorzenie statkow dla komputera:\n");

		wyswietlplanszagr(komputer); //funkcja wyswietla plansze


	getch();
	clrscr();


//---------------------------------------------------------------


} //koniec void poczatek(void)


//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------



//---------------------------------------------------------------------
//FUNKCJA sluzy do wyswietlenia tablicy gracza  -----------------------
//-----------------               -------------------------------------
//---------------------------------------------------------------------



void wyswietlplanszagr(int komputer1)
	{
					
		int i=0,j=0;
							
			printf("\n              X          \n");			
			printf("     1 2 3 4 5 6 7 8 9 10\n");
			//gotoxy(5,5);
					
					
			printf("    _____________________\n");
			//printf("1 |");	
					
			for(i=0;i<10;i++)
			 {
									
							
				if(i==4)
				{
				 printf("Y%2d |",i+1);
				goto x;	
				}
					
				printf("%3d |",i+1);	
					
				x:	
					
				  for(j=0;j<10;j++)
				  {
					
					if(komputer1==0)
					{

			 	 		printf("%c|",planszagr[i][j]);

					}			
					else
					{
						
						printf("%c|",planszakomp[i][j]);
						
					}
										
				  }
					
				 printf("\n");
						
			}
					
		printf("    ---------------------\n");
					
	printf("\n");		
					
	}		// koniec wyswietlplanszagr(void);
					
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------



//---------------------------------------------------------------------
//FUNKCJA sluzy do rozpatrzenia  jaki rodzaj statku chcemy ulorzyc-----
//-----------------               -------------------------------------
//ile ma miec masztow ,oraz za pomoca niej wchodzimy do funkcji rozstaw1
//---------------------------------------------------------------------


void autoustawianie(int komputer1)
{


	clrscr();

	int i=0;

	for(i=0;i<4;i++)  // automatycznie przelacza ukladanie wszystkich statkow
	{
		switch(i)		
			{	
				case 0:
				   {	
									
					if(komputer1==0)	
						{
											
						//int a=0;
						//rozstaw(planszagr,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						czterym(planszagr,komputer1);   //funkcja sluzy
												
						
						break;
						}					
						
					else	
						{
						//printf("CASE '0' komputer=1\n");getch();	
						//int a=0;
						//rozstaw(planszakomp,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						czterym(planszakomp,komputer1);   //funkcja sluzy
												
						
						break;
						
						}								
						
				   }	
						
				case 1:		
				   {		
										
					if(komputer1==0)	
						{
						
						//int a=1;
						//rozstaw(planszagr,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						trzym(planszagr,komputer1);  //funkcja sluzy						
												
						break;
						}					
						
					else	
						{
						
						//int a=1;
						//rozstaw(planszakomp,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						trzym(planszakomp,komputer1);   //funkcja sluzy						
												
						break;
												
						}
	
				   }
						
				case 2:			
				   {		
														
					if(komputer1==0)	
						{
																
						//int a=2;
						//rozstaw(planszagr,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						dwam(planszagr,komputer1);  //funkcja sluzy						
												
						break;

						}					
						
					else	
						{
																
						//int a=2;
						//rozstaw(planszakomp,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						dwam(planszakomp,komputer1);   //funkcja sluzy						
												
						break;
						
						}		
						
						
												
							
				   }		
						
				case 3:	
				   {		
				if(komputer1==0)	
						{
													
						//int a=3;
						//rozstaw(planszagr,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						jednom(planszagr,komputer1);  //funkcja sluzy
						
						break;
					
						}					
						
					else	
						{
												
						//int a=3;
						//rozstaw(planszakomp,a,komputer1); //funkcja sluzy do sposobu ukladania statkow
						
						jednom(planszakomp,komputer1);   //funkcja sluzy
						
						break;
					
						}			
												
							
				   }
				
				default :
				   {		
							
					printf("JEZELI w  for(i=0;i<4;i++)  jest inna wartosc od 0 1 2 3 cos zle\n lub wszystkie statki sa ulorzone\n");
					
						
					getch ();
					break;
						
				   }		
						
			}			
				
	}	// koniec for(i=0;i<4;i++)




		clrscr();

		if(komputer1==0)	
		{	
			//wyswietlplanszagr(komputer1); //funkcja
			printf("\n\n\n\n\n\n\n\n\tWYJSCIE Z UATAWIANIA STATKOW \n\n\t\t dla gracza nr 1 \n");
			getch();
			clrscr();
		}
		
		else
			
		{	
			//wyswietlplanszagr(komputer1); //funkcja
			printf("\n\n\n\n\n\n\n\n\tWYJSCIE Z UATAWIANIA STATKOW \n\n\t\t dla komputera \n");
			getch();
			clrscr();
		}	
			
	
		

}	//koniec automatycznego przelaczania ukladania wszystkich statkow




//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------




/*

//---------------------------------------------------------------------
//FUNKCJA sluzy do rozpatrzenia  jaki rodzaj statku chcemy ulorzyc-----
//-----------------               -------------------------------------
//ile ma miec masztow ,oraz za pomoca niej wchodzimy do funkcji rozstaw1
//---------------------------------------------------------------------



void rozstaw(char tab[][10],int a1,int kompter3)
	{


	if(a1==0) //poczatek czteromasztowca
		{

			// blok 1  ---------CZTEROMASZTOWIEC----- X 1------------------------------------

			czterym(tab,kompter3);	  //funkcja

		}//koniec czteromasztowca



	if(a1==1) //poczatek trzymasztowca
	   	{

	  		 // blok 2  ---------TRZYMASZTOWIEC----- X 2------------------------------------
						
			trzym(tab,kompter3); 	 //funkcja

	  	 }//koniec trzymasztowca


	if(a1==2) //poczatek dwumasztowca
	   	{
		
	  		 // blok 3  ---------DWUMASZTOWIEC----- X 3------------------------------------
			
			dwam(tab,kompter3);  	//funkcja

	  	 }//koniec dwumasztowca


	if(a1==3) //poczatek jednomasztowca
	   	{
		
	  		 // blok 4  ---------JEDNOMASZTOWIEC----- X 4------------------------------------
			
			jednom(tab,kompter3);  	//funkcja

	  	 }//koniec jednomasztowca


	clrscr();


	}  //koniec rozstaw  rozstaw(char tab[][10],int a1)

//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------

*/


/////////////////////////////poczatek/////////////////////////////////////////////////


//-----------------------------------------------------------------
//FUNKCJA  czterym(char tab2[][10]) rzeczy zwiazane z  ------------
//----------------- rozstawem  czteromasztowca  -------------------
//-------  przelacza do funkcji rozstaw1(tab,b,c,d)  --------------
//-----------------------------------------------------------------



void czterym(char tab2[][10],int komputer2)
	{

	randomize();

	// blok 1  ---------CZTEROMASZTOWIEC----- X 1------------------------------------		
		

		int s;

	zles4:	
	

//-----------------------
	
if(komputer2==0)
	{
	clrscr();
			
		wyswietlplanszagr(komputer2);	
		printf("\nUstawienie czteromasztowca.\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("1");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");

	textcolor(3);
		cprintf("     xxxx");
	textcolor(7);
		printf("\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("2");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");


	textcolor(3);
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");



	textcolor(7);
		printf("\n");			
	}		
	else
	{
	
	}

//----------------------------


			if(komputer2==0)
				{
				//printf("\n\n\t\tgf");	
				s=getch();
				//getch();	
				textcolor(7);
				cprintf("     Podales   %c",s);
				printf("\n");
				getch();
				clrscr();	
				}
				
				
				
			else
				{
				
				//komputer losuje

				s=(random(2)+1);

				if(s==1)
				{
				
				s='1';
					
				}	
					
					
				else
				{	
					
				s='2';
	
				}
	
				//printf(" dla s proc d :%d\n",s);		
				//printf(" dla s proc c :%c\n",s);
				//getch();			
				
					
				}
				
		//getch();
		

		int f3=0;  //zmienna do wielkosci ustawienia petli 
			   //(gdy =0 to jest standardowo bez zmian jak !=0 wtedy modyfikuje)	
				
		
		switch (s)		
		{	

			case '1':
			  {
				int b=3,c=0,d=0;
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja							
				break;						
					
			  }
	
			case '2':
			  {
				int b=0,c=3,d=1;	
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja							
				break;						
					
			  }
			default:
			  {
				clrscr();
				wyswietlplanszagr(komputer2);	//wyswietlplanszagr(0);	
				printf("\n\n\tNacisnales znak inny niz cyfry 1 lub 2\n");
				printf("\n\tTym razem nacisnij dobrza liczbe :\n");
				getch();
				clrscr();						
				goto zles4;						
					
			  }			
		}// koniec switch (s)




	}



//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------



//-----------------------------------------------------------------
//FUNKCJA  trzym(char tab2[][10]) rzeczy zwiazane z    ------------
//----------------- rozstawem  trzymasztowca    -------------------
//-------  przelacza do funkcji rozstaw1(tab,b,c,d)  --------------
//-----------------------------------------------------------------



void trzym(char tab2[][10],int komputer2)
	{


	randomize();

	// blok 1  ---------trzyMASZTOWIEC----- X 1------------------------------------		
		

		  int n=0;			
	   	for (n=0;n<2;n++)		//bo so 2 trzymasztowce
	   	{	
		
		
		int s;

	zles3:	
	
//-----------------------
	
if(komputer2==0)
	{
	clrscr();
			
		wyswietlplanszagr(komputer2);	
		printf("\nUstawienie trzymasztowca.\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("1");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");

	textcolor(3);
		cprintf("     xxx");
	textcolor(7);
		printf("\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("2");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");


	textcolor(3);
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");




	textcolor(7);
		printf("\n");			
	}
	else
	{	
		
	}
//----------------------------

			if(komputer2==0)
				{
					
				s=getch();		
				textcolor(7);
				cprintf("     Podales   %c",s);
				printf("\n");
				getch();
				clrscr();
					
				}
				
				
				
			else
				
				{
				
				//komputer losuje

				s=(random(2)+1);

				if(s==1)
				{
				
				s='1';
					
				}	
					
					
				else
				{	
					
				s='2';
	
				}	
				//printf(" dla s proc d :%d\n",s);		
				//printf(" dla s proc c :%c\n",s);
				//getch();			
				
					
				}
				
	
	
			int f3=1;  //zmienna do wielkosci ustawienia petli 
				   //(gdy =0 to jest standardowo bez zmian jak !=0 wtedy modyfikuje)	
		

		switch (s)		
		{	

			case '1':
			  {
				int b=3,c=1,d=0;
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja							
				break;						
					
			  }
	
			case '2':
			  {
				int b=1,c=3,d=1;	
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja							
				break;						
					
			  }
			default:
			  {
				clrscr();
				wyswietlplanszagr(komputer2);		
				printf("\n\n\tnNacisnales znak inny niz cyfry 1 lub 2\n");
				printf("\n\tTym razem nacisnij dobrza liczbe :\n");
				getch();
				clrscr();						
				goto zles3;						
					
			  }			
		}// koniec switch (s)


	     }// koniec for (n=0;n<1;n++)


	}



//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------




//-----------------------------------------------------------------
//FUNKCJA  dwam(char tab2[][10]) rzeczy zwiazane z  ------------
//----------------- rozstawem  dwamasztowca  -------------------
//-------  przelacza do funkcji rozstaw1(tab,b,c,d)  --------------
//-----------------------------------------------------------------



void dwam(char tab2[][10],int komputer2)
	{


	randomize();
		

	// blok 1  ---------dwaMASZTOWIEC----- X 1------------------------------------		
		

		  int n=0;			
	   	for (n=0;n<3;n++)		//bo so 3 dwamasztowce
	   	{	
			
		
	
		int s;

	zles2:	
	
			
//-----------------------

if(komputer2==0)
	{

		clrscr();
			
		wyswietlplanszagr(komputer2);	
		printf("\nUstawienie dwumasztowca.\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("1");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");

	textcolor(3);
		cprintf("     xx");
	textcolor(7);
		printf("\n\n");
		printf("Nacisnij (");

	textcolor(3);
		cprintf("2");
	textcolor(7);
		printf(")  Dla polorzenia :   \n");


	textcolor(3);
		cprintf("     x");
		printf("\n");
		cprintf("     x");
		printf("\n");


	textcolor(7);
		printf("\n");			
	}
	else
	{

	}		
//----------------------------

			if(komputer2==0)
				{
					
				s=getch();		
				textcolor(7);
				cprintf("     Podales   %c",s);
				printf("\n");
				getch();
				clrscr();
	
				}
				
				
				
			else
				{
				
				//komputer losuje

				s=(random(2)+1);

				if(s==1)
				{
				
				s='1';
					
				}	
					
					
				else
				{	
					
				s='2';
	
				}	
				//printf(" dla s proc d :%d\n",s);		
				//printf(" dla s proc c :%c\n",s);
				//getch();			
				
					
				}
	

			int f3=2;  //zmienna do wielkosci ustawienia petli 
				   //(gdy =0 to jest standardowo bez zmian jak !=0 wtedy modyfikuje)	
						

		switch (s)		
		{	

			case '1':
			  {
				int b=3,c=2,d=0;
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja
				break;						
					
			  }
	
			case '2':
			  {
				int b=2,c=3,d=1;	
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja	
				break;						
					
			  }
			default:
			  {
				clrscr();
				wyswietlplanszagr(komputer2);		
				printf("\n\n\tNacisnales znak inny niz cyfry 1 lub 2\n");
				printf("\n\tTym razem nacisnij dobrza liczbe :\n");
				getch();
				clrscr();						
				goto zles2;						
					
			  }			
		}// koniec switch (s)


	     }// koniec for (n=0;n<3;n++)


	}



//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------




//-----------------------------------------------------------------
//FUNKCJA  jednom(char tab2[][10]) rzeczy zwiazane z  ------------
//----------------- rozstawem  jednomasztowca  -------------------
//-------  przelacza do funkcji rozstaw1(tab,b,c,d)  --------------
//-----------------------------------------------------------------



void jednom(char tab2[][10],int komputer2)
	{


	// blok 4  ---------jednoMASZTOWIEC----- X 4------------------------------------		
		

		  int n=0;			
	   	for (n=0;n<4;n++)		//bo so 4 jednomasztowce
	   	{	
		

	if(komputer2==0)
	{

		clrscr();
		wyswietlplanszagr(komputer2);	
			
		printf("\n\n\tUstawienie jednomasztowca.\n\n");
						
		getch();
		clrscr();
	}

	else
	{
	
	}		
		
			int f3=3;  //zmienna do wielkosci ustawienia petli 
				   //(gdy =0 to jest standardowo bez zmian jak !=0 wtedy modyfikuje)	
			

			
				int b=3,c=3,d=0;
				rozstaw1(tab2,b,c,d,f3,komputer2); //funkcja					
			
	     }// koniec for (n=0;n<4;n++)

	}



//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------


/////////////////////////koniec////////////////////////////////////////////////




//-----------------------------------------------------------------
//FUNKCJA rozstaw1 sluzy przelaczenia i ustawienia odpowiednich ---
//------------ parametrow sluzacych do rozstawu statku ------------
//-----------------               ---------------------------------
//-------  przelacza do funkcji ustaw4_1 lub ustaw4_2  ------------
//-----------------------------------------------------------------


void rozstaw1(char tab1[][10],int b1,int c1,int d1,int f2,int komp)
	{

	randomize();
	clrscr();
			int x=0,y=0;
			//int *x1,*y1;

//*x1=&x;
//*y1=&y;

		//printf("y = %d\n",y);	
		//printf("x = %d\n",x);			
	//getch();	
			clrscr();

			
			jeszczer1 :



			//---------------------------

			if(komp==0)
			{

			  wyswietlplanszagr(komp);

			printf("Podaj polorzenie statku wspolrzedna x(wiersz).\n");
			scanf("%d",&y);	
			printf("Podaj polorzenie statku wspolrzedna y(kolumna).\n");	
			scanf("%d",&x);		
					//printf("if(komp==0)\n");	
				
				
			}

			else
			{

		   	// wyswietlplanszagr(komp);
							
			//printf(" else czyli komp = 1  if(komp==1)\n");getch();	
			//printf("Podaj polorzenie statku wspolrzedna x(wiersz).\n");			
				
				//komputer losuje
				y=(random(10)+1);
				//scanf("%d",&y);				
				
			//printf("Podaj polorzenie statku wspolrzedna y(kolumna).\n");				
				
				//komputer losuje
				x=(random(10)+1);
				//scanf("%d",&x);				
					//printf("else  czyli  if (komp==1)\n");
			
			}

		
					
					
					x--;
                 			y--;
						
			//---------------------------			

		//printf("x = %d\n",y);	
		//printf("y = %d\n",x);			
	//getch();

		
			if(x<0||y<0||x>6+b1||y>6+c1)
			  {	
					if(komp==0)
					{			
					printf("\n\n\tPolorzenie statku jest poza plansza podaj inne punkty.\n");
					getch();
					clrscr();
					}
					else
					{
					
					}					
					goto jeszczer1;		
					
			  }


				else   //poczatek elsexx1
				 {

					if((tab1[x][y]==spacja))     //||(tab1[x][y]=='*'))
					{	


						 int u=0;	//zwracana wartosc  funkcji ukladania statkow
						 //printf("x=%d,y=%d\n",x,y);
						 //getch ();
                        			 
								
							if(d1==0)	
							{	
				        	 	u=ustaw4_1(tab1,x,y,f2,c1,komp); //funkcja wyjatkow i ukladania
							}
							
							if(d1==1)	
							{	
				        	 	u=ustaw4_2(tab1,x,y,f2,b1,komp); //funkcja wyjatkow i ukladania
							}	
								
					         
						 //getch ();
						
					    if(u==3)
						{
						   //printf("gdy return=3\n");
						  // getch ();			
						   goto jeszczer1;
						
						}
					   	
					  } //koniec if(tab1[x][y]==spacja)
					
					     else
						
					     		{
					
								if(komp==0)
								{
								printf("\n\tTo miejsce jest juz zajete podaj inne wspolrzedne.\n");

								getch();
								clrscr();								
								}
									
								else
								{
					
								}					

							goto jeszczer1;		
										
							}		
					 
				    }    //koniec elsexx1



	}    // koniecvoid rozstaw1(tab1[][10],b1,c1,d1)

//---------------------------------------------------------
//-----------------koniec rozstaw1-------------------------
//---------------------------------------------------------
//---------------------------------------------------------





//-----------------------------------------------------------------
//------FUNKCJA sluzy do ulorzenia  (4) masztowcow na planszy--------
//-----------------w sposub xxxx  ---------------------------------
//--------sprawdza czy statek miesci sie na planszy itp------------
//-----------------------------------------------------------------




int ustaw4_1(char tab[][10],int x1,int y1,int f1,int c2,int komputer55)
    {
			
				
        int i=0,j=0;


//	dla rogow	rog gorny lewy					
//-----------------------------------------------	
	if(x1==0 && y1==0 )			
		{	
			for(i=0;i<5-f1;i++)
				{
				for(j=0;j<2;j++)
					{
									
						if(tab[x1+j][y1+i]==spacja||tab[x1+j][y1+i]=='*')	
						{
						
						}
									
						else
						{
						
						printf("\tTo miejsce jest zajete.\n");
						printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
						getch();
						clrscr();			
						//goto jeszczer1;		
						return 3;
										
						}
							
					}
							
				}
						
			for(i=0;i<4-f1;i++)
				{
				
				tab[x1][y1+i]='g';
							
				}	
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+1][y1+i]='*';
							
				}
							
			tab[x1][y1+4-f1]='*';
						
		}	
							
							
//	dla rogow	rog dolny lewy											
//------------------------------------------------	
	if(x1==9 && y1==0 )			
		{
				
			for(i=0;i<5-f1;i++)
			{
			 	for(j=0;j<2;j++)
					 {
						
						if(tab[x1-j][y1+i]==spacja||tab[x1-j][y1+i]=='*')
												
							{}
									
						 else
							{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_1 funkcja2  rog dolny lewy	\n");
								getch();
								clrscr ();		
								//goto jeszczer1;		
								return 3;
										
							}
							
					}
					
			}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}	
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1-1][y1+i]='*';
							
				}
							
			tab[x1][y1+4-f1]='*';
									
		}
							
//	dla rogow	rog gorny prawy								
//-----------------------------------------------	
				
	if(x1==0 && y1==6+c2 )			
		{	
			for(i=0;i<5-f1;i++)
				{
					for(j=0;j<2;j++)
						{
					
							if(tab[x1+j][y1+i-1]==spacja||tab[x1+j][y1+i-1]=='*')
																	
								{}
									
							else
							{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_1 funkcja3  rog gorny prawy	\n");									
								getch();
								clrscr();		
								//goto jeszczer1;		
								return 3;
										
							}
							
						 }
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+1][y1+i-1]='*';
							
				}
							
				tab[x1][y1-1]='*';
									
		}			
							
			
//	dla rogow	rog dolny prawy					
//-----------------------------------------------	
	if(x1==9 && y1==6+c2 )			
		{	
			for(i=0;i<5-f1;i++)
				{
					for(j=0;j<2;j++)
						{
						
							if(tab[x1-j][y1+1-1]==spacja||tab[x1-j][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_1 funkcja4  rog dolny prawy	\n");
									getch();
									clrscr();			
									//goto jeszczer1;		
									return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1-1][y1+i-1]='*';
							
				}
							
			 tab[x1][y1-1]='*';
								
		}	
							
//dla rogow    gorna krawedz(wiersz)
										
//-----------------------------------------------

	if(c2==1)
		{
				
			if(x1==0 && y1==6)
				{ goto dobrze1;}
			else
			{
				
			goto zle1;
				
			}
		}

	if(c2==2)
		{
				
			if(x1==0 && (y1==6||y1==7))
				{ goto dobrze1;}
			else
			{
				
			goto zle1;
				
			}
		}
	if(c2==3)
		{
				
			if(x1==0 && (y1==6||y1==7 ||y1==8))
				{ goto dobrze1;}
			else
			{
				
			goto zle1;
				
			}
		}
	zle1:

	if(x1==0 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5))			
		{	
			
			
				
		dobrze1:

			for(i=0;i<6-f1;i++)
				{
					 for(j=0;j<2;j++)
						{
							
							if(tab[x1+j][y1+i-1]==spacja||tab[x1+j][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_1 funkcja5 gorna krawedz(wiersz)\n");
									getch();
									clrscr();		
									//goto jeszczer1;		
									return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1+1][y1+i-1]='*';
							
				}
							
			tab[x1][y1-1]='*';	
			tab[x1][y1+4-f1]='*';
								
		}	
							
							
//dla rogow dolna krawedz(wiersz)
										
//-----------------------------------------------

	if(c2==1)
			{
				
				if(x1==9 && y1==6)
					{ goto dobrze2;}
				else
				{
				goto zle2;
				}
				
			}

	if(c2==2)
			{
				
				if(x1==9 && (y1==6||y1==7))
					{ goto dobrze2;}
				else
				{
				goto zle2;
				}
				
			}
	if(c2==3)
			{
				
				if(x1==9 && (y1==6||y1==7 ||y1==8))
					{ goto dobrze2;}
				else
				{
				goto zle2;
				}
				
			}

	zle2:

	if(x1==9 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5))		
		{	

			
				
		dobrze2:
			for(i=0;i<6-f1;i++)
				{
					for(j=0;j<2;j++)
						{
							if(tab[x1+j-1][y1+i-1]==spacja||tab[x1+j-1][y1+i-1]=='*')
																	
								{}
									
							 else
						
								{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_1 funkcja6 dolna krawedz(wiersz)\n");
								getch();
								clrscr();			
								//goto jeszczer1;		
								return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1-1][y1+i-1]='*';
							
				}
							
			tab[x1][y1-1]='*';	
			tab[x1][y1+4-f1]='*';
			
								
			}


//dla rogow lewa krawedz(kolumna)
										
//-----------------------------------------------
	if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && y1==0)			
		{	
			for(i=0;i<5-f1;i++)
				{
					for(j=0;j<3;j++)
						{
							if(tab[x1+j-1][y1+i]==spacja||tab[x1+j-1][y1+i]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_1 funkcja7 lewa krawedz(kolumna)\n");
									getch();
									clrscr();			
									//goto jeszczer1;		
									return 3;
												
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
					tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1-1][y1+i]='*';
				tab[x1+1][y1+i]='*';
							
				}
						   	
			tab[x1][y1+4-f1]='*';
									
		}


//dla rogow prawa krawedz(kolumna)
										
//-----------------------------------------------
	if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && y1==6+c2)			
		{	
			for(i=0;i<5-f1;i++)
				{
					for(j=0;j<3;j++)
						{
							
							
							if(tab[x1-j+1][y1+i-1]==spacja||tab[x1-j+1][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_1 funkcja8 prawa krawedz(kolumna)\n");
									getch();
									clrscr();			
									//goto jeszczer1;		
									return 3;		
										
								}
							
						 }
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1-1][y1+i-1]='*';
				tab[x1+1][y1+i-1]='*';
							
				}
												   	
			tab[x1][y1-1]='*';
									
		}


//dla reszty1
										
//-----------------------------------------------

	if(c2==1)
			{
				
				if((x1==1||x1==2 ||x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && y1==6)
					{ goto dobrze3;}
				else
				{
				goto zle3;
				}
				
			}

	if(c2==2)
			{
				
				if((x1==1||x1==2 ||x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && (y1==6||y1==7))
					{ goto dobrze3;}
				else
				{
				goto zle3;
				}
				
			}


		if(c2==3)
			{
				
				if((x1==1||x1==2 ||x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && (y1==6||y1==7 ||y1==8))
					{ goto dobrze3;}
				else
				{
				goto zle3;
				}
				
			}

	zle3 :	

	if((x1==1||x1==2 ||x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5))			
		{	
		
				
		dobrze3:
			
			for(i=0;i<6-f1;i++)
				{
					for(j=0;j<3;j++)
						{
							
							if((tab[x1+j-1][y1+i-1]==spacja)||(tab[x1+j-1][y1+i-1]=='*'))
																	
								{}
									
							else
						
								{
					
										
									if(komputer55==0)
									{
									
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_1 funkcja9 dla reszty1\n");
									
									getch();
									clrscr();
									
									}
									else
									{
									
									}

									//goto jeszczer1;		
									return 3;
								
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1][y1+i]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1-1][y1+i-1]='*';
				tab[x1+1][y1+i-1]='*';
							
				}
						
			tab[x1][y1-1]='*';		
			tab[x1][y1+4-f1]='*';

		
					
		}


					

//-----------------------------------------------

            
			
    return 19;

    }	//koniec ustaw4_2 



//-----------------------------------------------------------------
//-----------------------------------------------------------------
//-----------------------------------------------------------------





//-----------------------------------------------------------------
//------FUNKCJA sluzy do ulorzenia  (4) masztowcow na planszy--------
//--------sprawdza czy statek miesci sie na planszy itp------------
//----------------------   w sposub     ---------------------------
//--------------------------  x  ----------------------------------
//--------------------------  x  ----------------------------------
//--------------------------  x  ----------------------------------
//--------------------------  x  ----------------------------------
//-----------------------------------------------------------------  




int ustaw4_2(char tab[][10],int x1,int y1,int f1,int b2,int komputer55)
    {
        int i=0,j=0;

	
	

//	dla rogow	rog gorny lewy					
//-----------------------------------------------	
	if(x1==0 && y1==0 )			
		{	
			for(i=0;i<2;i++)
				{
				for(j=0;j<5-f1;j++)
					{
									
						if(tab[x1+j][y1+i]==spacja||tab[x1+j][y1+i]=='*')	
						{
						
						}
									
						else
						{
						
						printf("\tTo miejsce jest zajete.\n");
						printf("\tustaw4_2 funkcja1\n rog gorny lewy	");			
						getch();
						clrscr();			
						//goto jeszczer1;		
						return 3;
										
						}
							
					}
							
				}
			
			getch();
						
			for(i=0;i<4-f1;i++)
				{
				
				
				tab[x1+i][y1]='g';
							
				}	
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i][y1+1]='*';
							
				}
							
			tab[x1+4-f1][y1]='*';
						
		}	
							
							
//	dla rogow	rog dolny lewy											
//------------------------------------------------	
	if(x1==6+b2 && y1==0 )			
		{
				
			for(i=0;i<2;i++)
			{
			 	for(j=0;j<5-f1;j++)
					 {
						
						if(tab[x1+j-1][y1+i]==spacja||tab[x1+j-1][y1+i]=='*')
												
							{}
									
						 else
							{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_2 funkcja2\n rog dolny lewy	");
								getch();
								clrscr();			
								//goto jeszczer1;		
								return 3;
										
							}
							
					}
					
			}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}	
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i-1][y1+1]='*';
							
				}
							
			tab[x1-1][y1]='*';
									
		}
							
//	dla rogow	rog gorny prawy								
//-----------------------------------------------	
				
	if(x1==0 && y1==9 )			
		{	
			for(i=0;i<2;i++)
				{
					for(j=0;j<5-f1;j++)
						{
					
							if(tab[x1+j][y1+i-1]==spacja||tab[x1+j][y1+i-1]=='*')
																	
								{}
									
							else
							{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_2 funkcja3 rog gorny prawy	\n");									
								getch();
								clrscr();		
								//goto jeszczer1;		
								return 3;
										
							}
							
						 }
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i][y1-1]='*';
							
				}
							
			tab[x1+4-f1][y1]='*';
									
		}			
							
			
//	dla rogow	rog dolny prawy					
//-----------------------------------------------	
	if(x1==6 +b2 && y1==9 )			
		{	
			for(i=0;i<2;i++)
				{
					for(j=0;j<5-f1;j++)
						{
						
							if(tab[x1+j-1][y1+i-1]==spacja||tab[x1+j-1][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_2 funkcja4\n  rog dolny prawy	");
									
									getch();
									clrscr();		
									//goto jeszczer1;		
									return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i-1][y1-1]='*';
							
				}
							
			 tab[x1-1][y1]='*';
								
		}	
							
//dla rogow    gorna krawedz(wiersz)
										
//-----------------------------------------------
	if(x1==0 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))			
		{	
			for(i=0;i<3;i++)
				{
					 for(j=0;j<5-f1;j++)
						{
							
							if(tab[x1+j][y1+i-1]==spacja||tab[x1+j][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_2 funkcja5  gorna krawedz(wiersz)\n");
									getch();
									clrscr();		
									//goto jeszczer1;		
									return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i][y1-1]='*';
				tab[x1+i][y1+1]='*';
							
				}
							
				
			tab[x1+4-f1][y1]='*';
									
		}	
							
							
//dla rogow dolna krawedz(wiersz)
										
//-----------------------------------------------
	if(x1==6 +b2 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))		
		{	
			for(i=0;i<3;i++)
				{
					for(j=0;j<5-f1;j++)
						{
							if(tab[x1+j-1][y1+i-1]==spacja||tab[x1+j-1][y1+i-1]=='*')
																	
								{}
									
							 else
						
								{
					
								printf("\tTo miejsce jest zajete.\n");
								printf("\tustaw4_2 funkcja6  dolna krawedz(wiersz)\n");
								getch();
								clrscr();		
								//goto jeszczer1;		
								return 3;
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<5-f1;i++)
				{
							
				tab[x1+i-1][y1-1]='*';
				tab[x1+i-1][y1+1]='*';
							
				}
							
			tab[x1-1][y1]='*';	
			
									
			}


//dla rogow lewa krawedz(kolumna)
										
//-----------------------------------------------


	if(b2==1)
	{
		if((x1==6 ) && y1==0)			
		{

			goto dalej11;
		
		}

		else
		{
			
		goto zle11;		
			
		}		
			
	}



	if(b2==2)
	{
		if((x1==6 ||x1==7) && y1==0)			
		{

			goto dalej11;
		
		}

		else
		{
			
		goto zle11;		
			
		}		
			
	}



	zle11 :

	if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5) && y1==0)			
		{

	dalej11 :	
	
			for(i=0;i<2;i++)
				{
					for(j=0;j<6-f1;j++)
						{
							if(tab[x1+j-1][y1+i]==spacja||tab[x1+j-1][y1+i]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tnustaw4_2 funkcja7   lewa krawedz(kolumna)\n");
									getch();
									clrscr();			
									//goto jeszczer1;		
									return 3;
												
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
					tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1+i-1][y1+1]='*';
				
							
				}
						   	
			tab[x1-1][y1]='*';
			tab[x1+4-f1][y1]='*';
									
		}


//dla rogow prawa krawedz(kolumna)
										
//-----------------------------------------------



	if(b2==1)
	{
		if((x1==6 ) && y1==9)			
		{

			goto dalej12;
		
		}

		else
		{
			
		goto zle12;		
			
		}		
			
	}



	if(b2==2)
	{
		if((x1==6 ||x1==7) && y1==9)			
		{

			goto dalej12;
		
		}

		else
		{
			
		goto zle12;		
			
		}		
			
	}



	zle12 :





	if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5) && y1==9)			
		{	
			
		dalej12 :	
			for(i=0;i<2;i++)
				{
					for(j=0;j<6-f1;j++)
						{	
							
							if(tab[x1+j-1][y1+i-1]==spacja||tab[x1+j-1][y1+i-1]=='*')
																	
								{}
									
							else
						
								{
					
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_2 funkcja8   prawa krawedz(kolumna)\n");
									getch();
									clrscr();			
									//goto jeszczer1;		
									return 3;		
										
								}
							
						 }
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1+i-1][y1-1]='*';
				
							
				}
												   	
			tab[x1-1][y1]='*';
			tab[x1+4-f1][y1]='*';
									
		}


//dla reszty1
										
//-----------------------------------------------


	if(b2==1)
	{
		if((x1==6 ) && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))			
		{

			goto dalej13;
		
		}

		else
		{
			
		goto zle13;		
			
		}		
			
	}



	if(b2==2)
	{
		if((x1==6 ||x1==7) && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))			
		{

			goto dalej13;
		
		}

		else
		{
			
		goto zle13;		
			
		}		
			
	}



	zle13 :



	
	if((x1==1||x1==2 ||x1==3 ||x1==4 ||x1==5) && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))			
		{	
			
		dalej13:		
			
			for(i=0;i<3;i++)
				{
					for(j=0;j<6-f1;j++)
						{
							
							if((tab[x1+j-1][y1+i-1]==spacja)||(tab[x1+j-1][y1+i-1]=='*'))
																	
								{}
									
							else
						
								{
					
										
									if(komputer55==0)
									{
									
									printf("\tTo miejsce jest zajete.\n");
									printf("\tustaw4_2 funkcja9 dla reszty1\n");
									
									getch();
									clrscr();
									
									}
									else
									{

									}
												
									//goto jeszczer1;		
									return 3;
								
										
								}
							
						}
							
				}
							
						
			for(i=0;i<4-f1;i++)
				{
							
				tab[x1+i][y1]='g';
							
				}
						
						
			for(i=0;i<6-f1;i++)
				{
							
				tab[x1+i-1][y1-1]='*';
				tab[x1+i-1][y1+1]='*';
							
				}
						
			tab[x1-1][y1]='*';		
			tab[x1+4-f1][y1]='*';
									
		}


//-----------------------------------------------

            
			
    return 19;

    }  //koniec  ustaw4_2 




//-----------------------------------------------------------------
//-----------------------------------------------------------------
//-----------------------------------------------------------------



