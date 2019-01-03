


void wyswietlplanszagr1(char planszagr1[][10],char planszakomp1[][10],int komputer1);

int sprawdzeniestrzalu(char planszagru1[][10],char planszakomp1[][10],int x1,int y1,int mniejx1,int mniejy1,int mniejxp1,int mniejyp1);




//---------------------------------------------------------------------
//FUNKCJA sluzy do sprawdzenia czy zostal zatopiony statek  -----------
//-----------------       	      ---------------------------------
//---------------------------------------------------------------------

	


											
	int sprawdzeniestrzalu(char planszagru1[][10],char planszakomp1[][10],int x1,int y1,int mniejx1,int mniejy1,int mniejxp1,int mniejyp1)															
			{				   
			    

		int i=0,j=0,xx=0,ey=0,ex=0,ey1=0,ex1=0,licz=0;

		int rys=0;





//printf("takie jest x w funkcji : %d\n",y1);
//printf("takie jest y w funkcji : %d\n",x1);


//getch();
			//printf("2 x=%d  y=%d \n",x1,y1);		
			//printf("mniejx1=%d  mniejy1=%d   mniejxp1=%d  mniejyp1=%d\n\n",mniejx1,mniejy1,mniejxp1,mniejyp1);getch();		
			
		
						
				for(i=0;i<3-mniejy1;i++)
				{
				for(j=0;j<3-mniejx1;j++)
					{
									
					if(planszakomp1[x1+j-1+mniejxp1][y1+i-1+mniejyp1]=='g')	
						{									
																						
						licz++;	
						//xx++;
						//printf("\t\txx++ wynodi %d planszakomp1[%d][%d]=='g'	ZATOPIONY lub STRZELONY\n",xx,x1+j-1-ex+mniejxp1,y1+i-1-ey+mniejyp1);
						//getch();
									
						}	
									
						else
						{
						
						//printf("\txx++ wynodi %d planszakomp1[%d][%d]==nic\n",xx,x1+j-1-ex+mniejxp1,y1+i-1-ey+mniejyp1);
							
										
						}
							
					}	// 	koniec 	 for(j=0;j<3+ex+ex1;j++)	
							
				}	// 	koniec 	  for(i=0;i<3+ey+ey1;i++)
					
						       
				getch();					
				
				xx=1;	
				
									
			//teraz tutaj trzeba bardziej to rozbic	
						
							
								
				if(licz==2||licz==3)
				{
									
											
					xx=0;
	
											
		/*funkcja*/	   xx   =   poszerz(planszakomp1,x1,y1,&ey,&ex,&ey1,&ex1,licz,mniejx1,mniejy1,mniejxp1,mniejyp1);		//funkcja sluzy do poszerzenia sprawdzania jaki statek akurat jest strzelony
		


					//licz=0;
					//return 1;

				} 	// koniec   if(licz==2||licz==3)

	//printf("\t\tlicz=%d\n",licz);	

	//getch();						
	//printf("Powrot z funkcji poszerz i xx wynosi  %d \n\n",xx);				
						
							
					
												
			if(xx==1)				//??????????????? -mniejx
			{					
			printf("Wlasnie zatopiles jednomasztowca\n");
			
			
										
		for(i=0;i<3+ey+ey-mniejy1;i++)
		 {
		for(j=0;j<3+ex+ex-mniejx1;j++)
			{
									
			//if(planszakomp1[x1+j-1-ex+mniejxp1][y1+i-1-ey+mniejyp1]=='g')
			//	{
									
				if(planszagru1[x1+j-1-ex+mniejxp1][y1+i-1-ey+mniejyp1]=='g')

				{
											
				//printf("juz jest strzelone co najmniej jedno pole\n");getch();	
												
				}
													
				else	
				{	
												
				planszagru1[x1+j-1-ex+mniejxp1][y1+i-1-ey+mniejyp1]='*';
												
				}				
																				
			//	}
			}
												
													
		}
		
			//jeden11++;		
			return 1;	
				
		
		/*	for(i=0;i<3;i++)
				{
							
				planszagru1[x1+i-1+ex+ex1][y1-1+ey+ey1]='*';
				planszagru1[x1+i-1+ex+ex1][y1+1+ey+ey1]='*';
								
				}
							
			planszagru1[x1+1+ex+ex1][y1+ey+ey1]='*';
			planszagru1[x1-1+ex+ex1][y1+ey+ey1]='*';
							
		*/									
			
																					
			}	// koniec if(xx==1)					
										
			else  																						
			{	
			  /*funkcja*/  rys =  rysuj (planszagru1,xx,x1,y1,ey,ex,ey1,ex1,mniejx1,mniejy1,mniejxp1,mniejyp1);	
			}
						
			
				
							
					
					
									
									
									
						
					
					
									
										
					
									
									
		//ex=0,ex1=0,ey=0,ey1=0;	

						
		
						//clrscr();	
						//wyswietlplanszagr1(planszagru1,planszagru1,1);
						//getch();				
						//wyswietlplanszagr1(planszakomp1,planszakomp1,1);
						//getch();
									
						//clrscr();
									
								
							

				for(i=0;i<3-mniejy1;i++)
				{
				for(j=0;j<3-mniejx1;j++)
					{
									
					if(planszagru1[x1+j-1+mniejxp1][y1+i-1+mniejyp1]=='g')	
						{									
																						
						licz++;	
						xx++;
						//printf("\t\txx++ = %d tablica[%d][%d]	ZATOPIONY lub STRZELONY\n",xx,x1+j-1-ex+mniejxp1,y1+i-1-ey+mniejyp1);
						//getch();
									
						}	
									
						else
						{
						
						//printf("\txx++ = %d tablica[%d][%d]\n",xx,x1+j-1-ex+mniejxp1,y1+i-1-ey+mniejyp1);
						//	
										
						}
							
					}	// 	koniec 	 for(j=0;j<3+ex+ex1;j++)	
							
				}	// 	koniec 	  for(i=0;i<3+ey+ey1;i++)
					
						       
				//getch();getch();			
				if(rys==2)
				{	
				
					
				//dwa11++;
				return 2;					
				}		
			else		
			 {}
					
					
			if(rys==3)
				{	
				
					
				//trzy11++;		
				return 3;					
				}		
			else		
			 {}
										
						
			if(rys==4)
				{	
				
					
				//cztery11++;		
				return 4;					
				}		
			else		
			 {}
			
									
		return 0;					

		}	//koniec void void sprawdzeniestrzalu()
														
																							
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
								
								



								
								
