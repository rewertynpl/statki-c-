#include <stdio.h>
#include <conio.h>
#include <stdlib.h>												
#include <iostream.h>								
#include <time.h>
#include <dos.h>


void rysuj(char ekran[][79],char tabw[],int *aa,int *xx,int *yy);

void ruch(int *aa ,char tabw[],char *zmienna1);


void przestaw(char tabw[],int a1,char *zmienna2);

												
int main ()													
{												
		randomize();


                 int a=6;
int i=0,j=0,x=12,y=37,ile=0;
int start,aktualny;
char zmienna=' ';	
 					
				 									
		char tab[25][79];

		char  * taba= new  char[a];	
	

		    clrscr();

			taba[0]='g';
			taba[1]='p';
			taba[2]='p';
			taba[3]='g';
			taba[4]='p';
			taba[5]='g';

							
		for (i=0;i<25;i++)
		{											
			for(j=0;j<79;j++)
			{									
													
			tab[i][j]='5';
			}								
		}		



	// rysuj nr 1;
	
	
		for (i=0;i<22;i++)
		{											
			for(j=0;j<78;j++)
			{									
													
			printf("%c",tab[i][j]);
			}					
		       printf("\n");									
		}
	
	


	for (i=0;i<a;i++)

	{
	
	printf("\n\t\t %c",taba[i]);



	}





getch();






		
//   /*Funkcja*/	rysuj(tab,taba,&a);



int kk=0;

start= clock();     
	


for (kk=0;kk<190;kk++)

{




	//printf("\n  kk = %d\n",kk);
	//getch();



/*
		for (i=0;i<22;i++)
		{											
			for(j=0;j<78;j++)
			{									
													
			printf("%c",tab[i][j]);
			}					
		       printf("\n");									
		}

*/
		/*Funkcja*/	przestaw(taba,a,&zmienna);
	
		/*Funkcja*/	ruch(&a,taba,&zmienna);

		/*Funkcja*/	rysuj(tab,taba,&a,&x,&y);


clrscr();

		//printf("\n\ttablica taba ma i elementow == %d\n",a);

		//for(i=0;i<a;i++)
		//{
		//printf(" dla %d =   %c",i,taba[i]);
		// }
										
										
		for (i=0;i<22;i++)
		{											
			for(j=0;j<78;j++)
			{									
													
			printf("%c",tab[i][j]);
			}					
		       printf("\n");									
		}										
											
	
		//koncz:


		/*							
		for (i=0;i<24;i++)
		{											
			for(j=0;j<78;j++)
			{									
													
			printf("%c",tab[i][j]);
			}					
		       printf("\n");									
		}										
												
		*/																	
		
						
											
		while(ile<40)												
		{		
	      	i=random(250)/10;
	      	j=random(790)/10;
	      	x=((random(179)+1)/10)-9;
		
			
	      	if(tab[i][j]==5)
		{
	      	tab[i][j]='X';
		}

		ile++;	
			
		}		
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
													
		   //getch();
		//printf("tablica[%d][%d]= %d\n",i,j,x);

		/*   getch();
		for (i=0;i<22;i++)
		{											
			for(j=0;j<78;j++)
			{									
													
			printf("%c",tab[i][j]);
			}					
		       printf("\n");									
		}*/		





		aktualny = clock(); 

		 printf("%.2f", (aktualny-start)/CLK_TCK);


							
		//getch();										







													
}																								
	

							
	return 0;
										
}
													
	

void ruch(int *aa ,char tabw[],char *zmienna1)

{		
	char gdzie;				
											
	         int max;
										
		
		max=(*aa)-1;
			
	znowu:	

	
		if(kbhit())
		{
		gdzie=getch();


		if(gdzie=='w'||gdzie=='W')	//gora									
		{										
													
																									
		tabw[max]='g';						
											
												
		}
														
		else if	(gdzie=='s'||gdzie=='S')	//dol										
		{
		tabw[max]='d';						
											
												
		}																							
														
		else if(gdzie=='a'||gdzie=='A')	//lewo											
		{											
																									
		tabw[max]='l';						
											
												
		}												
														
		else if(gdzie=='d'||gdzie=='D')		//prawo												
		{																							
		tabw[max]='p';						
											
		}										
		
														
		else											
		  {
							
		printf("getch = %c\n",gdzie);
		printf("xxxxxXXXxx\n");getch();
		goto znowu;	
			
		  }

	
		}
			

		else	
		{	
		tabw[max]=tabw[max-1];	
		}	
			
						
		
	
	
	
			
		delay(200);
								
							
}


//void rysuj(char ekran[][79],int i,int j,int x, int y,int a)


void rysuj(char ekran[][79],char tabw[],int *aa,int *xx,int *yy)
{
								
							
											
								
		/// w max jest glowa weza						
							
clrscr();


		int i=*xx,j=*yy;
				
		//int max=(*aa)-1;
		  int min=0;
			
		int kon=1;			
		int l=0,p=0,g=0,d=0;

		
		rysujweza:
		
		if(tabw[min]=='l')	

		{
													
			if(j>0)	
														
			{	
			ekran[i][j]='P';										
			
			if (kon==1)
			{	
			ekran[i][j]=' ';
					
					
			}
			
						
							
							
							
											
			}
			j--;			
		}
											
		else
		  {}										
		

											
		if(tabw[min]=='p')											
												
		{											
																
			if(j<80)	
														
			{	
			ekran[i][j]='L';										
					
			if(kon==1)			
			{				
			ekran[i][j]=' ';
					
						
			}						
							
							
							
											
					
			}
			j++ ;							
		}							
											
		else
		  {}										
												
			//if(taba[a+1]==' ')									
		if(tabw[min]=='g')																						
		{																							
													
														
			if (i>0)
			{		
				
			ekran[i][j]='D';										
							
			if(kon==1)					
			{			
			ekran[i][j]=' ';
					
						
			}						
							
							
							
											
				
										
			}
			i--;																								
		}									
		else
		  {}										
								
											
												
													
												
												
		if(tabw[min]=='d')																						
		{																							
								
											
												
														
			if(i<45)
			{		
				
				
			
			ekran[i][j]='G';										
							
			if(kon==1)				
			{	
			ekran[i][j]=' ';
					
				
			}						
							
							
							
				
			}
			i++;	
											
		}												
											
		else
		  {}										
												
		min++;	
		
		
		kon=0;
											
			if(min<*aa)
			{
			
			goto rysujweza;
			}
			
									
			else
			  {
			
			
			if(tabw[0]=='l')			
			{
				
			*xx=*xx-0;
			*yy=*yy-1;
							
			}			
			else if(tabw[0]=='p')						
						
			{
				
			*xx=*xx-0;
			*yy=*yy+1;
							
			}			
						
						
			else if(tabw[0]=='g')			
						
			{
			
			*xx=*xx-1;
			*yy=*yy-0;
			
							
			}			
			else if(tabw[0]=='d')		
						
			{
				
			*xx=*xx+1;
			*yy=*yy-0;
							
			}			
			else
			  {}			
						
						
			}								
																								
												
									
	}
												
	//-----------------------------------------------								
	//-----------------------------------------------												
	//-----------------------------------------------								
	//-----------------------------------------------													
													
																									
								
											
												
													
void przestaw(char tabw[],int a1,char *zmienna2)//zamiana
{
	//getch();
	
	int s=0,i=0,j=0;

	for (i=0;i<a1-1;i++)

	{
	
	tabw[i]=tabw[i+1];



	}

	tabw[a1-1]='V';



	for (i=0;i<a1;i++)

	{
	
	//printf("\n\t\t %c",tabw[i]);



	}										
												
}//koniec													
	//-----------------------------------------------								
	//-----------------------------------------------												
	//-----------------------------------------------								
	//-----------------------------------------------													
																																
								
											
												
													
												
												
													
								