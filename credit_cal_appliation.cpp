#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include "windows.h"
 using namespace std;]
 void gotoxy(int x , int y){
         COORD coord ;
		 coord.X=x;
		 coord.Y=y;
		 setConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
		 }
		 // class definition
		   
		   class applicant{
		                string name;
						int age;
						string address;
						int m_sal;
						int h_loan;
						int p_loan;
						int no_chq_bounce;
						char own_house;
						char spouse_working;
						char dependent_parents;
						int company_tier;
						 
						 public:
						  //class function declation
						   void get_data();
						   int calc_liability();
						   void display_score();
						   };
						   
	// funtions that store the client details
      void applicant :: get_data(){
                                   system("cls");
                                   cout<<"Name of the applicant:";
                                   getline(cin,name);
                                   cout<<"Age:";
                                   cin>>age;
								   
								   cin.clear();
								   cin.ignore(1000,'\n');
								   
								   cout<<"Monthly Salary: ";
								   cin>>m_sal;
								   cout<<"Total home loan EMI:";
								   cin>>p_loan;
								   cout<<"Number of cheque bounces in last six months: ";
								   cin>>no_chq_bounce;
								   cout<<"Own house?(y or n):";
								   cin>>spouse_working;
								   cout<<"Dependent Parents? (y or n) :";
								   cin>>dependent_parents;
								   cout<<"company tier? (y or n): ";
								   cin>>company_tier;
								   }
								   
								   int applicant ::calc_liability()
								   {
								      int score=0;
									  int liability;
									  if(age>22 && age<=30)
									      score=score+2;
										else
                                          if(age>30 && age<=35)	
                                             score=score+1;
                                             else    
                                             score=score-1;
								   liability=h_loan+p_loan;
								   if(liabilty <=m_sal/4)
									   score=score+5;
								   if(liability > M_sal/4 && liabilty <= m_sal/3)
									   score=score+1;
								   if(liabilty >m_sal/3 && liability <=m_sal/2)
									   score=score+1;
								   if(liability> m_sal/2)
									   score=score-1;
								   if(no_chq_bounce>1)
									   score=score-2;
								   if(no_chq_bounce==1)
									    score=score-1;
									 if(no_chq_bounce==0)
									    score=score+1;
									if(p_loan>h_loan)
										score=score-1;
									else
										score=score+1;
									if(own_house=='y')
										score+=1;
									if(spouse_working=='y')
										score+=1;
									if(dependent_parents=='y');
									else 
										score=score+1;
									if(company_tier==1)
										score+=3;
									if(company_tier==2)
										score+=2;
									else 
										score=score+1;
									return(score);
								   }
								   
					// funtion displaying credit score and applicant  rating
                    void applicant::display_score(){
                                               int sc=calc_liability();
                                                system("cls");
                                 if(sc>9)	
                                cout<<"The applicant "<< name<<"is at low risk.\n Credit score= "<< sc << "\n credit can be given.";
                              else 
                              if(sc>5 && sc<=9)
                                 cout<< "The applicant "<<name<<"is at average eisk.\n credit score = "	<<sc<<"\ncredit cannot be given.";
					}
getch();
}
                              //End of the display score
  

                                     //main function
                            void main(){
                                         char flag='f';
                                         applicant a;
										 char ch;
										 while(1)
											 system("cls");
										 gotoxy(31,8);
										 cout<< "CREDIT CALCULATION APPLICATION";
										 gotoxy(31,9);
			                    cout<<"______________________________________________________" ;
								gotoxy(22,12);
								cout<<"1.-  Enter Loan applicant's details";
								gotoxy(22,13);
								cout<<"2.-   Display credit score";
								gotoxy(22,14);
								cout<<"3.-   Exit";
								gotoxy(22,17);
								cout<<"Select an option by typing the numeric code:";
								ch=getch();
								switch(ch){
									 case('1'):
									 {    a.get_data();
									      flag='t';
                                          break;
									 }
                                   			
									 case('2'):
  									 {   if(flag=='f')
                                          gotoxy(22,19);
									 cout<<"Loan applicant's details not yet entered ! Press any key to ccontinue .. ";
									 
									 getch();
									 }	
                                    else 
                                      a.display_score();
                                      break;
								}
                             case('3'):
							 {
                                     exit(1) ;
                                     break;
							 }
                            default:	
							{
                       gotoxy(22,19);
                        cout<<"invalid choice! Press any key to continue.."	;
                          getch();
							}
				           }	
                          }
                         }							  
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
									
								   
									   
									
										
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
									
								   
										
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   
								   








							  
		 