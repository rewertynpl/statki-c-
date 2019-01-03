
//#include <stdio.h>

   //	#include <time.h>

//#include <stdlib.h>
//#include <conio.h>

#include <d:\bc\bin\POCZATEK.h>



void  zamiana  (char planszagr1[][10],char planszakomp1[][10],int komputer1);
void wyswietlplanszagr1(char planszagr1[][10],char planszakomp1[][10],int komputer1);
void sprawdzenie(char planszagru1[][10],char planszakomp1[][10],int x1,int y1);
void strzelaj (char planszagru01[][10],char planszakomp01[][10]);

int main()
{
	
	clrscr();

	randomize();

	 char planszagr11[10][10];	//widac moje statki	to sie nie zmienia
         char planszakomp11[10][10];	// nie widac  ale sa to statki od komputera	to sie nie zmienia
		
	 char planszagru[10][10];	//widac tutaj gracz "sztrzela"	na poczatku jest pusta         to sie bedzie zmieniac
         char planszakompu[10][10];	//nie widac tutaj komputer "sztrzela"	na poczatku jest pusta     to sie bedzie zmieniac
		
int i=0;
int j=0;

for (i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
	  planszagr11[i][j]=' ';
	  planszakomp11[i][j]=' ';
	  planszagru[i][j]=' ';
          planszakompu[i][j]=' ';

//printf("%c  ",planszagr11[i][j]);
//printf("%c  ",planszakomp11[i][j]);
}

}

getch();


		poczatek(); //funkcja ////////////////////////////////////////


				
	getch();
			
	int komputer=0;
	
		 zamiana  (planszagr11,planszakomp11,komputer);
		wyswietlplanszagr1(planszagr11,planszakomp11, komputer);
		getch();		
	komputer=1 ;			
				
				
	 	 zamiana  (planszagr11,planszakomp11,komputer);
 		wyswietlplanszagr1(planszagr11,planszakomp11, komputer);			
	
		getch();		


printf("wyswietlplanszagr1(planszagr11,planszakomp11,      0   \n");



	//wyswietlplanszagr( komputer); 
 		wyswietlplanszagr1(planszagr11,planszakomp11,0);

getch();


printf("wyswietlplanszagr1(planszagr11,planszakomp11,      1   \n");



	//wyswietlplanszagr( komputer);
		
 		wyswietlplanszagr1(planszagr11,planszakomp11,1);

getch();





				
		 strzelaj (planszagru,planszakomp11)	;	// funkcja   /////////
	





		
printf("wyswietlplanszagr1(planszagr11,planszakomp11,0   \n");



	//wyswietlplanszagr( komputer);


 		wyswietlplanszagr1(planszagru,planszakompu,0);


printf("printfwyswietlplan765r1(plampu,0  \);\n");
getch();


printf("wyswietlplanszagr1(planszagru,planszakompu,1   \n");



	//wyswietlplanszagr( komputer);
		

 		wyswietlplanszagr1(planszagru,planszakompu,1);


	printf("printf(wyswietlplanszagr1(planszagru,planszakompu,1   \n);\n");
getch();

		
				
	getch();
					
	return 0;

}








void strzelaj (char planszagru01[][10],char planszakomp01[][10])
{
       int x,y;

jeszczer01:

printf("Podaj miejsce strzalu\n");

printf("Najpierw wspolrzedna x (kolumna)\n");
scanf("%d",&y);

//getch();

printf("Teraz wspolrzedna y (wiersz)\n");
scanf("%d",&x);
x--;
y--;
getch();


printf("TWOJE X : %d\n",y);
printf("TWOJE Y : %d\n",x);


getch();



			if(x<0||y<0||x>9||y>9)
			  {	
				       //	if(komp==0)
				      //	{
					printf("\n\n\tStrzal  poza plansza podaj inne punkty.\n");
					getch();
					clrscr();
				      //	}
				       //	else
				 //	{
					
				       //	}
				       	goto jeszczer01;		
					
			  }

			else   //poczatek elsexx1
			 {	
							
			
				if(planszagru01[x][y]=='g'||planszagru01[x][y]=='*')///????????
				{
				printf("Nie mozna drugi raz strzelac w to samo miejsce");
				goto jeszczer01;
				}			
														
					else  //poczatek elsexx2												
					{	
													
						planszagru01[x][y]='g';								
						if(planszagru01[x][y]==planszakomp01[x][y])														
						{	

										
			//-------------------------------------------------------------------------------------							
		

											
																					
					
												
					//	void sprawdzenie(charplanszakompu01[][10],char planszakomp01[][10],x,y);  jest na samym dole											
																
					
				sprawdzenie(planszagru01,planszakomp01,x,y); /////// ???????????????

				printf("CZY ABY NA PEWNO sprawdzenie(planszakompu01,planszakomp01,x,y);\n");getch();
										
															
																								
																	
			//-------------------------------------							
														
						}	//koniec if(planszakompu01[x][y]==planszakomp01[x][y])												
																	
						
						//planszagru01[x][y]='*';										
									
						else{}			
									
															
									
									
																			
															
					}	//koniec elsexx2									
			
						planszagru01[x][y]='7' ;	
									
			}	//koniec elsexx1		
					
									
									
									
									
									
									
									
									
									
					


}	//koniec void strzelaj ()













//---------------------------------------------------------------------
//FUNKCJA sluzy do wyswietlenia tablicy gracza  -----------------------
//-----------------       ZAMIANA        ------------------------------
//---------------------------------------------------------------------


								
											
		

void  zamiana  (char planszagr1[][10],char planszakomp1[][10],int komputer1)
{

      int i,j;

for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
			
		if(komputer1==0)
		{			
			
			if(planszagr[i][j]==spacja||planszagr[i][j]=='g')	
				{
							
				planszagr1[i][j]=planszagr[i][j];
			
				}
			else	
				{
			
			
				}
			
		}	
			
		else
		{	
									
			if(planszakomp[i][j]==spacja||planszakomp[i][j]=='g')	
				{		
			
				planszakomp1[i][j]=planszakomp[i][j];
			
				}
			else	
				{
			
			
				}				
					
							
		}	
					
						
	}	// koniec for(j=0;j<10;j++)	
						
}	//koniec for(i=0;i<10;i++)


			
}		// koniec void  zamiana  (void)
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------



//---------------------------------------------------------------------
//FUNKCJA sluzy do wyswietlenia tablicy gracza  -----------------------
//-----------------   Wyswietla ZAMIANA            --------------------
//---------------------------------------------------------------------



void wyswietlplanszagr1(char planszagr1[][10],char planszakomp1[][10],int komputer1)
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

								
						if(planszagr1[i][j]=='g')
							{
								
							textcolor(2);	
			 	 			cprintf("%c",planszagr1[i][j]);								
							textcolor(7);				
							printf("|");
										
							}
						else					
						{
						
						printf("%c|",planszagr1[i][j]);
											
						}					
						

					}			
					else
					{
						
								
						if(planszakomp1[i][j]=='g')					
							{
								
							textcolor(5);	
			 	 			cprintf("%c",planszakomp1[i][j]);								
							textcolor(7);				
							printf("|");
										
							}
						else					
						{
						
						printf("%c|",planszakomp1[i][j]);
											
						}					
								

						
					}
										
				  }
					
				 printf("\n");
						
			}
					
		printf("    ---------------------\n");
					
	printf("\n");		
					
	}		// koniec wyswietlplanszagr1(void);
					
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------











//---------------------------------------------------------------------
//FUNKCJA sluzy do sprawdzenia czy zostal zatopiony statek  -----------
//-----------------       	      ---------------------------------
//---------------------------------------------------------------------
//int ustaw4_1(char tab[][10],int x1,int y1,int f1,int c2,int komputer55);
	


											
	void sprawdzenie(char planszagru1[][10],char planszakomp1[][10],int x1,int y1)															
			{				   
			    int i=0,j=0,xx=0;
printf("takie jest x w funkcji X1 : %d\n",y1);
printf("takie jest y w funkcji : %d\n",x1);


getch();

				//	dla rogow	rog gorny lewy					
				//-----------------------------------------------	
						if(x1==0 && y1==0 )			
					{	
							for(i=0;i<2;i++)
							{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1+j][y1+i]=='g')	
									{
									xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[%d][%d]=='x');\n",x1+j,y1+i);
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
							}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<2;i++)
							{
							
							planszagru1[x1+1][y1+i]='*';
								
							}
							
						planszagru1[x1][y1+1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
			
						
					}	// koniec if(x1==0 && y1==0 )	
							
							
				//	dla rogow	rog dolny lewy											
				//------------------------------------------------	
					if(x1==9 && y1==0 )			
					{
							for(i=0;i<2;i++)
							{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1+j-1][y1+i]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
							}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<2;i++)
							{
							
							planszagru1[x1-1][y1+i]='*';
								
							}
							
						planszagru1[x1][y1+1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
							
			
									
					}	// koniec  if(x1==9 && y1==0 )

							
				//	dla rogow	rog gorny prawy								
				//-----------------------------------------------	
				
					if(x1==0 && y1==9 )			
					{	
							for(i=0;i<2;i++)
							{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1+j][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
							}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<2;i++)
							{
							
							planszagru1[x1+1][y1+i-1]='*';
								
							}
							
						planszagru1[x1][y1-1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
									
					}	// koniec  	if(x1==0 && y1==6+c2 )				
							
			
				//	dla rogow	rog dolny prawy					
				//-----------------------------------------------	
					if(x1==9 && y1==9 )			
					{	
							for(i=0;i<2;i++)
							{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1+j-1][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
							}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<2;i++)
							{
							
							planszagru1[x1-1][y1+i-1]='*';
								
							}
							
						planszagru1[x1][y1-1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
								
					}	// koniec  if(x1==9 && y1==6+c2 )
		
							
				//dla rogow    gorna krawedz(wiersz)
										
				//-----------------------------------------------

	if(x1==0 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))
			{			

						for(i=0;i<3;i++)
						{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1+j][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
						}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<3;i++)
							{
							
							planszagru1[x1+1][y1+i-1]='*';
								
							}
							
						planszagru1[x1][y1-1]='*';
						planszagru1[x1][y1+1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
								
					}	
							
							
				//dla rogow dolna krawedz(wiersz)
										
				//-----------------------------------------------


				if(x1==9 && (y1==1||y1==2 ||y1==3 ||y1==4 ||y1==5||y1==6 ||y1==7 ||y1==8))		
					{				
						for(i=0;i<3;i++)
						{
							for(j=0;j<2;j++)
								{
									
							if(planszakomp1[x1-j][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
						}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<3;i++)
							{
							
							planszagru1[x1-1][y1+i-1]='*';
								
							}
							
						planszagru1[x1][y1-1]='*';
						planszagru1[x1][y1+1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
											
					}


				//dla rogow lewa krawedz(kolumna)
										
				//-----------------------------------------------
					if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && y1==0)			
					{	
						for(i=0;i<2;i++)
						{
							for(j=0;j<3;j++)
								{
									
							if(planszakomp1[x1+j-1][y1+i]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
						}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<3;i++)
							{
							
							planszagru1[x1+i-1][y1+1]='*';
								
							}
							
						planszagru1[x1-1][y1]='*';
						planszagru1[x1+1][y1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
						
										
					}


				//dla rogow prawa krawedz(kolumna)
										
				//-----------------------------------------------
					if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && y1==9)			
					{	
						for(i=0;i<2;i++)
						{
							for(j=0;j<3;j++)
								{
									
							if(planszakomp1[x1+j+1][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
						}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<3;i++)
							{
							
							planszagru1[x1+i-1][y1-1]='*';
								
							}
							
						planszagru1[x1+1][y1]='*';
						planszagru1[x1-1][y1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
												
					}	






				//dla reszty1
										
				//-----------------------------------------------

			
				if((x1==1 ||x1==2|| x1==3 ||x1==4 ||x1==5 ||x1==6 ||x1==7 ||x1==8) && (y1==1|| y1==2|| y1==3|| y1==4|| y1==5|| y1==6|| y1==7||y1==8))	
					{


						for(i=0;i<3;i++)
						{
							for(j=0;j<3;j++)
								{
									
							if(planszakomp1[x1+j-1][y1+i-1]=='g')	
									{
							xx++;
									}
									
							else
									{
						
							printf("\txx++ if(planszakomp1[x1+j-1][y1+i-1]=='x');\n");
							//printf("\tustaw4_1 funkcja1  rog gorny lewy	\n");			
							//getch();
							//clrscr();			
							//goto jeszczer1;		
							//return 3;
										
									}
							
								}
							
						}
																		
						if(xx==1)				
						{					
										
						printf("Wlasnie zatopiles jednomasztowca\n");
										
							for(i=0;i<3;i++)
							{
							
							planszagru1[x1+i-1][y1-1]='*';
							planszagru1[x1+i-1][y1+1]='*';
								
							}
							
						planszagru1[x1+1][y1]='*';
						planszagru1[x1-1][y1]='*';					
															
						}						
										
						else																						
						{							
										
										
										
						}						
						
									
				}		


					

		//-----------------------------------------------

            
			
    		//return 19;

    		}	//koniec void sprawdzenie ()									
														
																							
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
								
