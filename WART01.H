

void przeloncznik(int x211,int y211,int *ex0111,int *ey0111,int *ex1111,int *ey1111,int *l1,int *p1,int *g1,int *d1);


#include "POCZATEK.h"


void przeloncznik(int x211,int y211,int *ex0111,int *ey0111,int *ex1111,int *ey1111,int *l1,int *p1,int *g1,int *d1)
	{



//getch();
//printf("\t\tJESTESMY W WARTOWNIK  x=%d  y=%d\n\n",x211,y211);getch();getch();getch();


//---------------------poczatek  dla  tablicy bez!!!--> 	skrajnych rogow, kolumn i wierszy   ---------(moze jakis znacznik ustawic)----------

	//--------------poczatek  rogi ---------------------------------		

		////----------poczatek automatyczne rogi -------------					
			   int i,j,max=10;
			for(i=1;i<max-1;i++)
				{		
				for(j=1;j<max-1;j++)					
					{					
						//if((i==1 && j==1)||(i==2 && j==2)||(i==3 && j==3)||(i==4 && j==4)||(i==5 && j==5)||(i==6 && j==6)||(i==7 && j==7)||(i==8 && j==8))	//??????								
						
						if((i==j)&&(i==x211)&&(j==y211))	
							
						{									
							//printf("poczatek automatyczne rogi 1 --->	i=x czyli %d   	j=y czyli %d\n",i,j);getch();		
							switch (i)	// poczatek  switch (i)
							{		
								case 1:	
								{							
								
									goto  ustawtak6;	
									//return 6;	
								
								}
									
								case 2:	
								{							
												
									if(*ey0111==1)				
									{					
									
									goto  ustawtak2;	
									//return 2;								
														
									}
																
									if(*ex0111==1)				
									{					
									
									goto  ustawtak5;	
									//return 5;									
														
									}						
													
									goto  ustawtak1;	
									//return 1;		
								
								}	
																			
								case 3:	
								{							
												
									if(*ey0111==2)				
									{					
									
									goto  ustawtak2;							
														
									}
																
									if(*ex0111==2)				
									{					
									
									goto  ustawtak5;								
														
									}						
													
									goto  ustawtak1;	
								
								}	
									
								case 4:	
								{							
												
									if(*ey0111==3)				
									{					
									
									goto  ustawtak2;							
														
									}
																
									if(*ex0111==3)				
									{					
									
									goto  ustawtak5;								
														
									}						
													
									goto  ustawtak1;	
								
								}
									
									
								case 5:	
								{							
												
									if(*ey1111==3)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex1111==3)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}
									
								case 6:	
								{							
												
									if(*ey1111==2)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex1111==2)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}
										
															
								case 7:	
								{							
												
									if(*ey1111==1)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex1111==1)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}	
								
									
								case 8:	
								{							
												
								goto  ustawtak11;		
								
								}					
								
									
							}   // koniec  switch (i)	
									
						}			
					}										
							
				}			
									
									
															
							
					
									
				for(i=1;i<max-1;i++)
				{		
				for(j=1;j<max-1;j++)					
					{					
						
						if((i==max-1-j)&&(i==x211)&&(j==y211))	
							
						{									
							//printf("poczatek automatyczne rogi 2 --->	i=x czyli %d       j=y czyli %d\n",i,j);getch();		
							switch (j)	// poczatek  switch (i)
							{		
								case 1:	
								{							
								
									goto  ustawtak10;	
								
								}
									
								case 2:	
								{							
												
									if(*ey0111==1)				
									{					
									
									goto  ustawtak2;							
														
									}
																
									if(*ex1111==1)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}	
																			
								case 3:	
								{							
												
									if(*ey0111==2)				
									{					
									
									goto  ustawtak2;							
														
									}
																
									if(*ex1111==2)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}	
									
								case 4:	
								{							
												
									if(*ey0111==3)				
									{					
									
									goto  ustawtak2;							
														
									}
																
									if(*ex1111==3)				
									{					
									
									goto  ustawtak9;								
														
									}						
													
									goto  ustawtak1;	
								
								}
									
									
								case 5:	
								{							
												
									if(*ey1111==3)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex0111==3)				
									{					
									
									goto  ustawtak5;								
														
									}						
													
									goto  ustawtak1;	
								
								}
									
								case 6:	
								{							
												
									if(*ey1111==2)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex0111==2)				
									{					
									
									goto  ustawtak5;								
														
									}						
													
									goto  ustawtak1;	
								
								}
										
															
								case 7:	
								{							
												
									if(*ey1111==1)				
									{					
									
									goto  ustawtak3;							
														
									}
																
									if(*ex0111==1)				
									{					
									
									goto  ustawtak5;								
														
									}						
													
									goto  ustawtak1;	
								
								}	
								
									
								case 8:	
								{							
												
								goto  ustawtak7;		
								
								}					
								
									
							}   // koniec  switch (j)	
									
						}			
					}										
							
				}			
									
			
			////----------koniec automatyczne rogi -------------					
													
		


	

												
	//------------------koniec   rogi ----------------------------								
		


		//------------------poczatek   kolumny ----------------------------
												
				

							
			//	if((i>j)&&(i!=j)&&(i!=max-1-j)&&(i==x211)&&(j==y211))	//lewo i dol								
			//	if((i<j)&&(i!=j)&&(i!=max-1-j)&&(i==x211)&&(j==y211))	//prawo i gora							
			//											
			//	if((i>j)&&(i!=j)&&(i>max-1-j))	//dol							
			//	if((i>j)&&(i!=j)&&(i<max-1-j))	//lewo											
			//	if((i<j)&&(i!=j)&&(i<max-1-j))	//gora								
			//	if((i<j)&&(i!=j)&&(i>max-1-j))	//prawo	
			//	
			


													
		////----------poczatek automatyczne kolumny -------------					
			   
			for(i=1;i<max-1;i++)
				{		
				for(j=1;j<max-1;j++)					
					{					
						//i>j
						
						if(((i>j)&&(i!=j)&&(i<max-1-j)||(i<j)&&(i!=j)&&(i>max-1-j))&&(i==x211)&&(j==y211))	//lewo i prawo
							
						{									
							//printf("poczatek automatyczne kolumny	  i=x czyli %d   j=y czyli %d\n",i,j);getch();
										
							switch (j)	// poczatek  switch (j)
							{																				
											
								case 1:	
								{							
									if(*ex0111==1||*ex0111==2||*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==1||*ex1111==2||*ex1111==3)								
									{
									
									goto  ustawtak9;	
									
									}
												
								goto  ustawtak2;	
							
								}
								
									
								case 2:	
								{							
									if(*ey0111==1)								
									{
									
									goto  ustawtak2;	
									
									}
												
									if(*ex0111==2||*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==2||*ex1111==3)								
									{
									
									goto  ustawtak9;	
									
									}
												
								goto  ustawtak1;
								
								}
									
								case 3:	
								{							
									if(*ey0111==2)								
									{
									
									goto  ustawtak2;	
									
									}
												
									if(*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==3)								
									{
									
									goto  ustawtak9;	
									
									}
												
								goto  ustawtak1;
								
								}
									
								case 6:	
								{							
									if(*ey1111==2)								
									{
									
									goto  ustawtak2;	
									
									}
												
									if(*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==3)								
									{
									
									goto  ustawtak9;	
									
									}
												
								goto  ustawtak1;
								
								}
								
								case 7:	
								{							
									if(*ey1111==1)								
									{
									
									goto  ustawtak3;	
									
									}
												
									if(*ex0111==2||*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==2||*ex1111==3)								
									{
									
									goto  ustawtak1;	
									
									}
												
								goto  ustawtak3;
								
								}
													
								case 8:	
								{							
												
									if(*ex0111==1||*ex0111==2||*ex0111==3)								
									{
									
									goto  ustawtak5;	
									
									}
									
									
									if(*ex1111==1||*ex1111==2||*ex1111==3)								
									{
									
									goto  ustawtak9;	
									
									}
												
								goto  ustawtak3;
								
								}				
										
											
							}	// koniec  switch (i)			
											
						}					
											
					}						
											
				}							
											
		////----------koniec automatyczne kolumny -------------			
							
	
		//------------------poczatek   wiersze ----------------------------
												
				

							
			//	if((i>j)&&(i!=j)&&(i!=max-1-j)&&(i==x211)&&(j==y211))	//lewo i dol								
			//	if((i<j)&&(i!=j)&&(i!=max-1-j)&&(i==x211)&&(j==y211))	//prawo i gora							
			//											
			//	if((i>j)&&(i!=j)&&(i>max-1-j))	//dol							
			//	if((i>j)&&(i!=j)&&(i<max-1-j))	//lewo											
			//	if((i<j)&&(i!=j)&&(i<max-1-j))	//gora								
			//	if((i<j)&&(i!=j)&&(i>max-1-j))	//prawo	
			//	
			


													
		////----------poczatek automatyczne wiersze -------------										
									


				for(i=1;i<max-1;i++)
				{		
				for(j=1;j<max-1;j++)					
					{					
						  //i<j
							
						if(((i>j)&&(i!=j)&&(i>max-1-j))||((i<j)&&(i!=j))&&(i<max-1-j)&&(i==x211)&&(j==y211))	//dol i gora
							
						{									
							//printf("poczatek automatyczne wiersze 	   i=x czyli %d   j=y czyli %d\n",i,j);getch();
										
							switch (i)	// poczatek  switch (i)
							{																				
											
											
								case 1:	
								{							
									if(*ey0111==1||*ey0111==2||*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==1||*ey1111==2||*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak5;	
							
								}
											
								case 2:	
								{	
									if(*ex0111==1)								
									{
									
									goto  ustawtak5;	
									
									}
																
									if(*ey0111==2||*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==2||*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak1;	
							
								}
											
								case 3:	
								{	
									if(*ex0111==2)								
									{
									
									goto  ustawtak5;	
									
									}
																
									if(*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak1;	
							
								}
											
								case 6:	
								{	
									if(*ex1111==2)								
									{
									
									goto  ustawtak5;	
									
									}
																
									if(*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak1;	
							
								}
								
								case 7:	
								{	
									if(*ex1111==1)								
									{
									
									goto  ustawtak9;	
									
									}
																
									if(*ey0111==2||*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==2||*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak1;	
							
								}
														
								case 8:	
								{							
									if(*ey0111==1||*ey0111==2||*ey0111==3)								
									{
									
									goto  ustawtak2;	
									
									}
									
									
									if(*ey1111==1||*ey1111==2||*ey1111==3)								
									{
									
									goto  ustawtak3;	
									
									}
												
								goto  ustawtak5;	
							
								}			
																				
											
							}	// koniec  switch (i)			
											
						}					
											
					}						
											
				}




											
		
		//------------------koniec  automatyczne wiersze ----------------------------
																							
															
//---------------------koniec    dla tablicy bez!!!-->	skrajnych rogow, kolumn i wierszy   ---------(moze jakis znacznik ustawic)----------
//------------------------------------------------------------------------------------------------------

		


		ustawtak1:
					
			*l1=1;
			*p1=1;
			*g1=1;
			*d1=1;
		//printf("	GO TO 1 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak2:
					
			*l1=0;
			*p1=1;
			*g1=1;
			*d1=1;
		//printf("	GO TO 2 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak3:
					
			*l1=1;
			*p1=0;
			*g1=1;
			*d1=1;
		//printf("	GO TO 3 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak4:
					
			*l1=0;
			*p1=0;
			*g1=1;
			*d1=1;
		//printf("	GO TO 4 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak5:
					
			*l1=1;
			*p1=1;
			*g1=0;
			*d1=1;
		//printf("	GO TO 5 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak6:
					
			*l1=0;
			*p1=1;
			*g1=0;
			*d1=1;
		//printf("	GO TO 6 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak7:
					
			*l1=1;
			*p1=0;
			*g1=0;
			*d1=1;
		//printf("	GO TO 7 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak8:
					
			*l1=0;
			*p1=0;
			*g1=0;
			*d1=0;
		//printf("	GO TO 8 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak9:
					
			*l1=1;
			*p1=1;
			*g1=1;
			*d1=0;
		//printf("	GO TO 9 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak10:
					
			*l1=0;
			*p1=1;
			*g1=1;
			*d1=0;
		//printf("	GO TO 10 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak11:
					
			*l1=1;
			*p1=0;
			*g1=1;
			*d1=0;
		//printf("	GO TO 11 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak12:
					
			*l1=0;
			*p1=0;
			*g1=1;
			*d1=0;
		//printf("	GO TO 12 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak13:
					
			*l1=1;
			*p1=1;
			*g1=0;
			*d1=0;
		//printf("	GO TO 13 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak14:
					
			*l1=0;
			*p1=1;
			*g1=0;
			*d1=0;
		//printf("	GO TO 14 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak15:
					
			*l1=1;
			*p1=0;
			*g1=0;
			*d1=1;
		//printf("	GO TO 15 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;


		ustawtak16:
					
			*l1=0;
			*p1=0;
			*g1=0;
			*d1=0;
		//printf("	GO TO 16 \n  *l1= %d  *p1= %d  *g1= %d  *d1= %d \n",*l1,*p1,*g1,*d1);getch();
				
		goto koniec;

			
			
	    koniec:
	
									
	}	// koniec funkcji  void przeloncznik