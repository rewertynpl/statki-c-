
#include <stdio.h>

   	#include <time.h>

#include <stdlib.h>
#include <conio.h>

//#include <d:\bc\bin\POCZATEK.h>
#include "poszerz.h"
#include "rysujgwiazdki.h"
#include "sprawdzastrzal.h"



void  zamiana  (char planszagr1[][10],char planszakomp1[][10],int komputer1);



void strzelaj (char planszagru01[][10],char planszakomp01[][10],int komp10);



void pokaz (char planszagru2[][10],int x1,int y1,int ey0,int ex0,int ey2,int ex2);

void rysuj (char planszagru2[][10],int xx1,int x2,int y2,int ey0,int ex0,int ey2,int ex2,int licz0);	


int cztery=0;
int trzy=0;
int dwa=0;
int jeden=0;



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
int sprawdz=0;






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

//getch();


		poczatek(); //funkcja ////////////////////////////////////////


				
	getch();
		printf("hh               lllllll                oooooooo\n",cztery);	
	int komputer=0;
	
		 zamiana  (planszagr11,planszakomp11,komputer);
		wyswietlplanszagr1(planszagr11,planszakomp11, 0);
		getch();		
	komputer=1 ;			
		wyswietlplanszagr1(planszagr11,planszakomp11, 1);
		getch();		
				
	 	 zamiana  (planszagr11,planszakomp11,komputer);
 		wyswietlplanszagr1(planszagr11,planszakomp11, komputer);			
	
		getch();

		
					printf("\t\tplanszakomp11\n");
					wyswietlplanszagr1(planszakomp11,planszagr11, 0);			
	
					getch();
						 
					printf("\t\tplanszagr11\n");
					wyswietlplanszagr1(planszagr11,planszakomp11, 0);			
	
					getch();	
							
					printf("\t\tplanszakompu\n");
					wyswietlplanszagr1(planszakompu,planszagr11, 0);			
	
					getch();
						 
					printf("\t\tplanszagru\n");
					wyswietlplanszagr1(planszagru,planszakomp11, 0);			
	
					getch();	    
						
					
	startuj:				



                 komputer = 0;
					
	/*funkcja*/	 strzelaj (planszagru,planszakomp11,komputer)	;	// funkcja   /////////
		
				
				
							
	if(jeden==4&&dwa==3&&trzy==2&&cztery==1)
		{
		printf("GRATULACJE WYGRALES\n");getch();
		goto koncz;
		}		
				
		else		
		{			
				      komputer = 1;
		/*funkcja*/	 strzelaj (planszakompu,planszagr11,komputer)	;	// funkcja   /////////
		
			if(jeden==4&&dwa==3&&trzy==2&&cztery==1)
			{
			printf("GRATULACJE WYGRALES\n");getch();
			goto koncz;
			}		//planszagru planszakomp11
			
			else	
			{	
				
				for (i=0;i<10;i++)	
				{		
				for(j=0;j<10;j++)	
				{	
						
					if((planszakompu[i][j]!=spacja)||(planszagru[i][j]!=spacja))		
					{	
					sprawdz++;
						
					}	
										
					else
					  {}
					
					if(sprawdz==99||sprawdz==100)
					{
					goto koncz;
					}
					else					
					 {
					  clrscr();	
					printf("\t\tplanszakompu\n");
					wyswietlplanszagr1(planszakompu,planszagr11, 0);			
	
					getch();
						 
					printf("\t\tplanszagru\n");
					wyswietlplanszagr1(planszagru,planszakomp11, 0);			
	
					getch();
					printf("\t\n\n\tSPRAWDZ = %d\n",sprawdz);getch();	 
					goto startuj;
	
					}		
						
						
						
						
								
				}		
						
				}		
					
			}		
				
		}		
		printf("\n\tSPRAWDZ = %d\n",sprawdz);getch();		
				
	koncz :			
				
				

				
				
 		wyswietlplanszagr1(planszagru,planszakompu,0);
				



	
		

 		wyswietlplanszagr1(planszagru,planszakompu,1);


	
getch();

		printf("jeden = %d  dwa = %d  trzy = %d cztery= %d \n\n",jeden,dwa,trzy,cztery);getch();
				
	//getch();
					
	return 0;

}




void strzelaj (char planszagru01[][10],char planszakomp01[][10],int komp10)
{		
		
		
       int x,y;
       int  mniejx=0,mniejy=0;	
	int mniejxp=0,mniejyp=0;					
	int liczstatki;		
			
			
			
//int ilosc=0;

jeszczer01:

    if (komp10==0)
        {           clrscr();
					//printf("\t\tplanszakompu\n");
					//wyswietlplanszagr1(planszakompu,planszagr11,0);			
	
					//getch();
						 
					//printf("\t\tplanszagru\n");
					wyswietlplanszagr1(planszagru01,planszagru01,0);			
	
					getch();
	
		printf("Podaj miejsce strzalu\n");

		printf("Najpierw wspolrzedna x (kolumna)\n");
		scanf("%d",&y);

		//getch();
	
		printf("Teraz wspolrzedna y (wiersz)\n");
		scanf("%d",&x);

		 }
		 else
		 {
					//printf("\t\tplanszakompu\n");
					//wyswietlplanszagr1(planszakompu,planszagr11,0);			
	
					//getch();
						 
					//printf("\t\tplanszagru\n");
					wyswietlplanszagr1(planszagru01,planszagru01,0);			
	
					getch();
         	y=random(10)+1;
		 x=random(10)+1;
         }

x--;
y--;
getch();


printf("TWOJE X : %d\n",x);
printf("TWOJE Y : %d\n",y);


getch();


			//	ilosc++;
			//	if(ilosc<15)	
			//	{


			if(x<0||y<0||x>9||y>9)
			  {	
				       //	if(komp==0)
				      //	{
					    clrscr();
					//wyswietlplanszagr1(planszakompu,planszagr11,0);	
					wyswietlplanszagr1(planszagru01,planszagru01,0);			
	
					//getch();
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
					  clrscr();
					//wyswietlplanszagr1(planszakompu,planszagr11,0);	
					wyswietlplanszagr1(planszagru01,planszagru01,0);			
	
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
				if((x==1||x==2 ||x==3 ||x==4 ||x==5||x==6||x==7||x==8) && (y==1||y==2 ||y==3 ||y==4 ||y==5||y==6 ||y==7 ||y==8))			
		{												
			mniejx=0;
			mniejy=0;
			mniejxp=0;
			mniejyp=0;
			//printf("1 mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			//printf("x=%d  y=%d \n",x,y);			
				
		}	
		
		
		else	
		{	
			
			if((x==0 && y==0))
				{
					
					mniejx=1;
					mniejy=1;
					mniejxp=1;
					mniejyp=1;
			//printf("2 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
				}
			else	
			  {}
				
			if((x==9 && y==0 ))
				{
					
					mniejx=1;
					mniejy=1;
					mniejxp=0;
					mniejyp=1;
			
			//printf("3 x=%d  y=%d \n",x,y);		
					
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
				}
			else	
			  {}
			
			if((x==0 && y==9))
				{
					
					mniejx=1;
					mniejy=1;
					mniejxp=1;
					mniejyp=0;
			
			//printf("4 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
					
				}
			else	
			  {}	
			
			if((x==9 && y==9))
				{
					
					mniejx=1;
					mniejy=1;
					mniejxp=0;
					mniejyp=0;
			
			//printf("5 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
					
				}
			else	
			  {}		
				
			if((x==0)&& (y==1||y==2 ||y==3 ||y==4 ||y==5||y==6||y==7||y==8) )	
				{
				
					mniejx=1;
					mniejy=0;
				
					mniejxp=1;
					mniejyp=0;
			
			//printf("6 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
					
				
				}	
				
			else	
			  {}	
				
			
			if((x==9)&& (y==1||y==2 ||y==3 ||y==4 ||y==5||y==6||y==7||y==8) )	
				{
				
					mniejx=1;
					mniejy=0;
				
					mniejxp=0;
					mniejyp=0;
			
			//printf("7 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
					
				
				}	
				
			else	
			  {}	
								
			if((x==1||x==2 ||x==3 ||x==4 ||x==5||x==6||x==7||x==8)&&(y==0 ) )	
				{
				
					mniejx=0;
					mniejy=1;				
				
					mniejxp=0;
					mniejyp=1;
			
			//printf("8 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
				
				
				}
								
			else	
			  {}		
				
								
			if((x==1||x==2 ||x==3 ||x==4 ||x==5||x==6||x==7||x==8)&&(y==9) )	
				{
				
					mniejx=0;
					mniejy=1;				
				
					mniejxp=0;
					mniejyp=0;
			
			//printf("9 x=%d  y=%d \n",x,y);		
			//printf("mniejx=%d  mniejy=%d   mniejxp=%d  mniejyp=%d\n\n",mniejx,mniejy,mniejxp,mniejyp);getch();		
			
				
				
				}
								
			else	
			  {}		
								
				
								
		}	

			
				
				
				
				/*funkcja*/  liczstatki   = 	sprawdzeniestrzalu(planszagru01,planszakomp01,x,y,mniejx,mniejy,mniejxp,mniejyp);
				
					//printf("liczstatki = %d\n\n",liczstatki);getch();	
									
									
									
									
										
				//printf("CZY ABY NA PEWNO sprawdzenie(planszakompu01,planszakomp01,x,y);\n");getch();
					
				
					
					
					
																	
			//-------------------------------------							
														
						}	//koniec if(planszakompu01[x][y]==planszakomp01[x][y])												
																	
						









					

		
						else{}			
									
															
									
									
																			
															
					}	//koniec elsexx2									
			
						//planszagru01[x][y]='7' ;	
									
			}	//koniec elsexx1		
					
			
				
				
			if(planszakomp01[x][y]!='g')	
				
			{				
			planszagru01[x][y]='*';										
			}							
			else{}				
					
			if(liczstatki==1)
				{	
				
					
				jeden++;		
				//return 3;					
				}		
			else		
			 {}
										
						
			if(liczstatki==2)
				{	
				
					
				dwa++;		
				//return 4;					
				}		
			else		
			 {}		
						
			if(liczstatki==3)
				{	
				
					
				trzy++;		
				//return 3;					
				}		
			else		
			 {}
										
						
			if(liczstatki==4)
				{	
				
					
				cztery++;		
				//return 4;					
				}		
			else		
			 {}				
							
					
						
				//goto jeszczer01;
															
				//}
																								
				//else{}	// koniec if(ilosc<15)	
								
		// return 0;				
							
					
					

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
								
						   //	textcolor(2);	
			 	 			printf("%c",planszagr1[i][j]);								
							//textcolor(7);				
							printf("|");
										
							}
						else					
						{
						
						printf("%c|",planszagr1[i][j]);
											
						}					
						

					}			
					else
					{
						//if(i==5&&j==5){	planszakomp1[i][j]='g';}else{}if(i==5&&j==6){	planszakomp1[i][j]='g';}else{}
								
						if(planszakomp1[i][j]=='g')					
							{
								
							//textcolor(5);	
			 	 			printf("%c",planszakomp1[i][j]);								
						   //	textcolor(7);				
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


