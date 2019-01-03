

void przeloncznik2(int x211,int y211,int *ex0111,int *ey0111,int *ex1111,int *ey1111,int *l1,int *p1,int *g1,int *d1);












void przeloncznik2(int x211,int y211,int *ex0111,int *ey0111,int *ex1111,int *ey1111,int *l1,int *p1,int *g1,int *d1)
	{
						
//getch();
//printf("\t\tJESTESMY W WARTOWNIK-02 x=%d  y=%d\n\n",x211,y211);getch();getch();getch();


                          int i=0,j=0,max=10;
				//poczatek automatyczne rogi
				
				for(i=0;i<max;i++)
				{		
				for(j=0;j<max;j++)					
					{					
						//if((i==1 && j==1)||(i==2 && j==2)||(i==3 && j==3)||(i==4 && j==4)||(i==5 && j==5)||(i==6 && j==6)||(i==7 && j==7)||(i==8 && j==8))	//??????								
						
						if((i==j)&&(i==x211)&&(j==y211))	
							
						{									
							//printf("poczatek automatyczne rogi 1 --->	i=x czyli %d   	j=y czyli %d\n",i,j);getch();
							switch (i)	// poczatek  switch (i)
							{
									
								case 0:	
								{							
									*l1=0;
									*p1=1;
									*g1=0;
									*d1=1;
									goto  ustawtak6;
										
							
								}				
									
									
							
											
								case 9:	
								{							
									*l1=1;
									*p1=0;
									*g1=1;
									*d1=0;
									goto  ustawtak11;
											
							
								}	
									
										
							}   // koniec  switch (i)	
									
						}			
					}										
							
				}
									
									
									
				
									
									
									
				for(i=0;i<max;i++)
				{		
				for(j=0;j<max;j++)					
					{					
						
						if((i==max-1-j)&&(i==x211)&&(j==y211))	
							
						{									
							//printf("poczatek automatyczne rogi 2 --->	i=x czyli %d       j=y czyli %d\n",i,j);getch();		
							switch (j)	// poczatek  switch (i)
							{					
								
								case 0:	
								{							
									*l1=0;
									*p1=1;
									*g1=1;
									*d1=0;
									goto  ustawtak10;
										
							
								}				
									
									
							
											
								case 9:	
								{							
									*l1=1;
									*p1=0;
									*g1=0;
									*d1=1;
									goto  ustawtak7;
											
							
								}	
								
									
									
							}   // koniec  switch (j)	
									
						}			
					}										
							
				}
	
									
									
									
							
										
				////----------poczatek automatyczne kolumny -------------					
			   
			for(i=0;i<max;i++)
				{		
				for(j=0;j<max;j++)					
					{					
						
						
						if((j==0||j==9)&&(i==x211)&&(j==y211))	//lewo i prawo
							
						{									
							//printf("poczatek automatyczne kolumny	  i=x czyli %d   j=y czyli %d\n",i,j);getch();
										
							switch (j)	// poczatek  switch (j)
							{					
							
									
									
									
								case 0:	
								{							
									if((*ex0111==0&&x211==1)||(*ex0111==1&&x211==2)||(*ex0111==2&&x211==3)||(*ex0111==3&&x211==4))								
									{
									
									*l1=0;
									*p1=1;
									*g1=0;
									*d1=1;
									goto  ustawtak6;
										
									}
									
									
									if((*ex1111==0&&x211==8)||(*ex1111==1&&x211==7)||(*ex1111==2&&x211==6)||(*ex1111==3&&x211==5))								
									{
									
									*l1=0;
									*p1=1;
									*g1=1;
									*d1=0;
									goto  ustawtak10;
									
									}
									
									*l1=0;
									*p1=1;
									*g1=1;
									*d1=1;			
								goto  ustawtak2;	
							
								}				
									
										
								case 9:	
								{							
									if((*ex0111==0&&x211==1)||(*ex0111==1&&x211==2)||(*ex0111==2&&x211==3)||(*ex0111==3&&x211==4))								
									{
									
									*l1=1;
									*p1=0;
									*g1=0;
									*d1=1;
									goto  ustawtak7;
										
									}
									
									
									if((*ex1111==0&&x211==8)||(*ex1111==1&&x211==7)||(*ex1111==2&&x211==6)||(*ex1111==3&&x211==5))								
									{
									
									*l1=1;
									*p1=0;
									*g1=1;
									*d1=0;
									goto  ustawtak11;
									
									}
									
									*l1=1;
									*p1=0;
									*g1=1;
									*d1=1;			
								goto  ustawtak3;	
							
								}
											
									
									
										
							
									
									
							}	// koniec  switch (i)			
											
						}					
											
					}						
											
				}							
											
		////----------koniec automatyczne kolumny -------------			
									
							
									
									
																
									
							
				////----------poczatek automatyczne wiersze -------------										
									


				for(i=0;i<max;i++)
				{		
				for(j=0;j<max;j++)					
					{					
						  //i<j
							
						if((i==0||i==9)&&(i==x211)&&(j==y211))	//dol i gora
							
						{									
							//printf("poczatek automatyczne wiersze 	   i=x czyli %d   j=y czyli %d\n",i,j);getch();
										
							switch (i)	// poczatek  switch (i)
							{					
									
									
							
									
									
								case 0:	
								{							
									if((*ey0111==0&&y211==1)||(*ey0111==1&&y211==2)||(*ey0111==2&&y211==3)||(*ey0111==3&&y211==4))								
									{
									
									*l1=0;
									*p1=1;
									*g1=0;
									*d1=1;
									goto  ustawtak6;
									
									}
									
									
									if((*ey1111==0&&y211==8)||(*ey1111==1&&y211==7)||(*ey1111==2&&y211==6)||(*ey1111==3&&y211==5))							
									{
									
									*l1=1;
									*p1=0;
									*g1=0;
									*d1=1;
									goto  ustawtak7;
									
									}
									
									*l1=1;
									*p1=1;
									*g1=0;
									*d1=1;				
								goto  ustawtak5;	
							
								}				
									
											
								case 9:	
								{							
									if((*ey0111==0&&y211==1)||(*ey0111==1&&y211==2)||(*ey0111==2&&y211==3)||(*ey0111==3&&y211==4))								
									{
									
									*l1=0;
									*p1=1;
									*g1=1;
									*d1=0;
									goto  ustawtak10;
									}
									
									
									if((*ey1111==0&&y211==8)||(*ey1111==1&&y211==7)||(*ey1111==2&&y211==6)||(*ey1111==3&&y211==5))							
									{
									
									*l1=1;
									*p1=0;
									*g1=1;
									*d1=0;
									goto  ustawtak11;
									
									}
												
									*l1=1;
									*p1=1;
									*g1=1;
									*d1=0;
								goto  ustawtak9;
								}	
									
							
									
									
																
							}	// koniec  switch (i)			
											
						}					
											
					}						
											
				}		
							
				



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


























					
						