#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "assignment5.h"  
#include "Assignment3.h"                     //add this comment in your respective source files as well
#include "assignment4.h"                     //add this comment in your respective source files as well      

int main()
{
   int num;

   // Infinite loop until user press zero to exit
   while(1)                                                                       
   {
        printf("\n--------------------------------------------------------------------------------------------------------------------\n" );           
        printf("\n\n\t\t\t\t\t ********* PROBLEM SOLVER ********* \n\n" );
        printf("\n--------------------------------------------------------------------------------------------------------------------\n" );
        
		printf("\n >>> Press ......\n");
		printf("\n - 31 for Assignment3 Problem1");
		printf("\t\t - 41 for Assignment4 Problem1");
		printf("\t\t - 51 for Assignment5 Problem1 \n");
		
		printf("\n - 32 for Assignment3 Problem2");
		printf("\t\t - 42 for Assignment4 Problem2");
		printf("\t\t - 52 for Assignment5 Problem2 \n");
		
		printf("\n - 33 for Assignment3 Problem3");
		printf("\t\t - 43 for Assignment4 Problem3");
		printf("\t\t - 53 for Assignment5 Problem3 \n");
		
		printf("\n - 34 for Assignment3 Problem4");
		printf("\t\t - 44 for Assignment4 Problem4");
		printf("\t\t - 54 for Assignment5 Problem4 \n");
		
		printf("\n - 35 for Assignment3 Problem5");
		printf("\t\t - 45 for Assignment4 Problem5");
		printf("\t\t - 55 for Assignment5 Problem5 \n\n");
		
		printf("\t\t\t\t\t\t\t\t\t\t - 56 for Assignment5 Problem6\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t - 57 for Assignment5 Problem7\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t - 58 for Assignment5 Problem8\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t - 59 for Assignment5 Problem9\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t - 510 for Assignment5 Problem10\n\n");
        printf("\t\t\t\t\t ----- And Press 0 to Exit ----- \n");                                               
         
        printf("\n Which problem do you want to solve? : ");
        scanf("%d",&num);
        printf("\t>>PRESS ENTER<<");
		getch();
	    system("cls");                                                        

        printf("\n");
	    printf("    . \n\n" );
        printf("    . \n\n" );
        printf("    . \n\n" );

		if (num==0)                                                                     
		    break;
	
	        switch(num)                                                                 
	        {
	        	  case 31:                                                                    
			      problem31();                                                             
			      break;
			      
			      case 32:                                                                    
			      problem32();                                                             
			      break;
			      
			      case 33:                                                                    
			      problem33();                                                             
			      break;
			    
			      case 34:                                                                    
			      problem34();                                                             
			      break;
			    
			      case 35:                                                                    
			      problem35();                                                             
			      break; 
	        	
		 	   case 41:                                                                    
			      problem41();                                                             
			      break;
			      
			   case 42:                                                                    
			      problem42();                                                             
			      break;
			      
			   case 43:                                                                    
			      problem43();                                                             
			      break;
			    
			   case 44:                                                                    
			      problem44();                                                             
			      break;
			    
			   case 45:                                                                    
			      problem45();                                                             
			      break;
			      
			   case 51:                                                                    
			      problem51();                                                             
			      break;
			      
			   case 52:                                                                    
			      problem52();                                                             
			      break;
			      
			   case 53:                                                                    
			      problem53();                                                             
			      break;
			    
			   case 54:                                                                    
			      problem54();                                                             
			      break;
			    
			   case 55:                                                                    
			      problem55();                                                             
			      break;
			      
			   case 56:                                                                    
			      problem56();                                                             
			      break;
			      
			   case 57:                                                                    
			      problem57();                                                             
			      break;
			    
			   case 58:                                                                    
			      problem58();                                                             
			      break;
			      
			   case 59:                                                                    
			      problem59();                                                             
			      break;
			   case 510:
			      problem510();                                                             
			      break;
			      
			   case 0:
			   	{
			   		break;
				}
				  
				default:
	              printf(" Wrong input please select a number from the given menu\n");
	              break;
        	}
        	printf("\n\n________________________________________________\n");
        	printf("\t>>PRESS ENTER<<");
        	getch();
//	    system("cls");
	}

   return 0;
}
