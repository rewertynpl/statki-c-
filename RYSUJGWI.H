


void pokaz (char planszagru2[][10],int x1,int y1,int ey0,int ex0,int ey2,int ex2,int mniejx1,int mniejy1,int mniejxp1,int mniejyp1);

int rysuj (char planszagru2[][10],int xx1,int x2,int y2,int ey0,int ex0,int ey2,int ex2,int mniejx21,int mniejy21,int mniejxp21,int mniejyp21);	








//---------------------------------------------------------
//---------Funkcja sprawdza czy zatopilismy statka  -------
//---------jezeli tak to w pola sasiadow podstawia np '*'--
//------------bo wiemy ze sosiad calego statka nie moze byc
//----------statkiem     ----------------------------------
//---------------------------------------------------------
								
								
int rysuj (char planszagru2[][10],int xx2,int x2,int y2,int ey0,int ex0,int ey02,int ex02,int mniejx21,int mniejy21,int mniejxp21,int mniejyp21)
	{			
				
	    int	powtorzenie = 0;
	    int i=0,j=0;				
									
	//printf("TERAZ JESTESMY przed xx2 = %d if(xx2==%d) \n",xx2,xx2);getch();	
							
									
			if(xx2==2)  		// poczatek dla if(xx2==2) 
										
			{	
				//printf("TERAZ JESTESMY W if(xx2==2) \n");getch();		
				for(i=0;i<3+ey0+ey02-mniejy21;i++)
				 {
				for(j=0;j<3+ex0+ex02-mniejx21;j++)
					{
						
					//if(planszakomp1[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')
					//	{
									
						if(planszagru2[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')

							{
											
							//printf("juz jest strzelone co najmniej jedno pole\n");getch();	
														
							powtorzenie++;	
							}
					//	}
					}
				 }	
								
									
											
								
										
					if(powtorzenie==1)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
							//printf("narazie tylko ten jeden maszt wiec nie trzeba narazie niczego sprawdzac\n");		
							//getch();
						}
					       	else
						{		
													
										
						 if(powtorzenie==2)

						  {	
													
													
							printf("\n\t\tWlasnie zatopiles DWUmasztowca\n");		
							getch();
									
													
						/*funkcja*/	pokaz (planszagru2,x2,y2,ey0,ex0,ey02,ex02,mniejx21,mniejy21,mniejxp21,mniejyp21);			
								return 2;
								//dwa++;
																	
						  }		
									
									         
									
						  else
						  {	
			
							//printf("w tym bloku nie moze byc wieksza liczba powtorzen\n");				
							//getch();
							//							
						  }
															
											
			
													
						}
																					
							
				}  // koniec dla if(xx2==2) 
											
											
									
			if(xx2==3)  		// poczatek dla if(xx2==3) 
										
			{	
				//printf("TERAZ JESTESMY W if(xx2==3) \n");getch();		
				for(i=0;i<3+ey0+ey02-mniejy21;i++)
				 {
				for(j=0;j<3+ex0+ex02-mniejx21;j++)
					{
									
					//if(planszakomp1[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')
					//	{
									
						if(planszagru2[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')

							{
											
							//printf("juz jest strzelone co najmniej jedno pole\n");getch();	
												
							powtorzenie++;	
							}
					//	}
					}
				 }	
								
									
											
								
										
					if(powtorzenie==1)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
								//printf("narazie tylko ten jeden maszt wiec nie trzeba narazie niczego sprawdzac\n");		
							getch();
						}
					   	else
						{		
						}				
									
						if(powtorzenie==2)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
							//printf("narazie tylko dwa  maszty wiec nie trzeba narazie niczego sprawdzac\n");		
							//getch();
						}
					       	else
						{		
						}
														
						 if(powtorzenie==3)

						  {	
													
								printf("\n\t\tWlasnie zatopiles TRZYmasztowca\n");		
								getch();
											
													
						/*funkcja*/	pokaz (planszagru2,x2,y2,ey0,ex0,ey02,ex02,mniejx21,mniejy21,mniejxp21,mniejyp21);			
								return 3;					
								//trzy++;
																		
						  }		
									
									
									
						  else	 				
						  {	
						
														
						  }
															
						//printf("powtorzenie == %d\n",powtorzenie);getch();
																			
							
					}  // koniec dla if(xx2==3) 
														
										
										
									
			if(xx2==4)  		// poczatek dla if(xx2==4) 
										
			{	
				//printf("TERAZ JESTESMY W if(xx2==4) \n");getch();		
				for(i=0;i<3+ey0+ey02-mniejy21;i++)
				 {
				for(j=0;j<3+ex0+ex02-mniejx21;j++)
					{
									
					//if(planszakomp1[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')
					//	{
									
						if(planszagru2[x2+j-1-ex0+mniejxp21][y2+i-1-ey0+mniejyp21]=='g')

							{
											
							//printf("juz jest strzelone co najmniej jedno pole\n");getch();	
														
							powtorzenie++;	
							}
					//	}
					}
				 }	
								
									
										
					if(powtorzenie==1)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
							//printf("narazie tylko ten jeden maszt wiec nie trzeba narazie niczego sprawdzac\n");		
							//getch();
						}
					       	else
						{		
						}				
									
						if(powtorzenie==2)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
							//printf("narazie tylko dwa  maszty wiec nie trzeba narazie niczego sprawdzac\n");		
							///getch();
						}
					       	else
						{		
						}
						if(powtorzenie==3)	//to tylko jeden zestrzelilem (czyli aktualny ruch)					
						{	
							//printf("narazie tylko trzy  maszty wiec nie trzeba narazie niczego sprawdzac\n");		
							//getch();
						}
					       	else
						{		
						}					
						 if(powtorzenie==4)

						  {	
													
							printf("\n\t\tWlasnie zatopiles CZTEROmasztowca\n");		
							getch();

						/*funkcja*/	pokaz (planszagru2,x2,y2,ey0,ex0,ey02,ex02,mniejx21,mniejy21,mniejxp21,mniejyp21);			
							
							//cztery++;
							return 4;											
						  }		
									
									
									
						  else	 				
						  {	
						
														
						  }
														
						printf("powtorzenie == %d\n",powtorzenie);getch();
																					
							
				}  // koniec dla if(xx2==4) 			
				
		return 0;
							
	}	//koniec funkcji							
								
				
				
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------


//---------------------------------------------------------
//-----------	FUNKCJA pokaz 	--------------------
//---------------------------------------------------------
//---------------------------------------------------------
			
void pokaz (char planszagru2[][10],int x2,int y2,int ey0,int ex0,int ey2,int ex2,int mniejx1,int mniejy1,int mniejxp1,int mniejyp1)
	{
		
		int i=0,j=0;





printf("\t\tJESTESMY W POKAZ\n");
printf("x=%d  y=%d\n",x2,y2);getch();


	for(i=0;i<3+ey0+ey2-mniejy1;i++)
		 {
		for(j=0;j<3+ex0+ex2-mniejx1;j++)
			{
									
			//if(planszakomp1[x2+j-1-ex0+mniejxp1][y2+i-1-ey0+mniejyp1]=='g')
			//	{
									
				if(planszagru2[x2+j-1-ex0+mniejxp1][y2+i-1-ey0+mniejyp1]=='g')

				{
											
				//printf("juz jest strzelone co najmniej jedno pole\n");getch();	
												
				}
													
				else	
				{	
												
				planszagru2[x2+j-1-ex0+mniejxp1][y2+i-1-ey0+mniejyp1]='*';
												
				}				
																				
			//	}
			}
												
													
		}	
		
		
		
		
		
	}  // koniec void pokaz 

					
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------
//---------------------------------------------------------							
						