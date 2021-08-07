#include<stdio.h>
#include <string.h>
#include "assignment4.h"

//_________________________________________Assignment#4 Problem#1________________________________________________

int input_problem41()
{
	int number;
	printf("Enter a Number:");
	scanf("%d",&number);
	return number;
}

int processing_problem41(int number)
{
	int s,remaining,cubeIs;
	int result=0;
	
s=number;

while (s != 0)
{
  remaining=s%10;
  
  cubeIs=remaining*remaining*remaining;
  printf("\n%d*%d*%d = %d\n",remaining,remaining,remaining,cubeIs);
  
  result+= remaining * remaining * remaining;
s = s/10;  
}
return result;
}

void output_problem41(int result, int number)
{
	 printf("\nsum is: %d\n",result);
 if (result==number)
  {
    printf("\n%d is an Armstrong number", number);
  }
 else
 {
    printf("\n%d is not an Armstrong number", number);
 }
}

void problem41()
{
	int asK,worK,number;
 printf("\n * Finding Armstrong Number Problem * \n");
	number = input_problem41();
	worK = processing_problem41(number);
	output_problem41(worK,number);
}


//_________________________________________Assignment#4 Problem#2________________________________________________

void processing_problem42()
{
	int a, b, c;          //team one with 3 rounds
	int A, B, C;          //team two with 3 rounds
	
	int lead1[2];     //round one of team one and two respectively
	int lead2[2];      //round two of team one and two respectively
	int lead3[2];      //round three of team one and two respectively
	int a_r1 = 0, b_r2 = 0, c_r3 = 0;
	int A_r1 = 0, B_r2 = 0, C_r3 = 0;
	

	printf("enter the scores of TEAM 1 for round 1:");
	scanf("%d",&a);
	printf("enter the scores of TEAM 2 for round 1:");
	scanf("%d",&A);
	printf("enter the scores of TEAM 1 for round 2:");
	scanf("%d",&b);
	printf("enter the scores of TEAM 2 for round 2:");
	scanf("%d",&B);
	printf("enter the scores of TEAM 1 for round 3:");
	scanf("%d",&c);
	printf("enter the scores of TEAM 2 for round 3:");
	scanf("%d",&C);
	
	a_r1=a;            //storing marks of team one of (r1) in this
	A_r1=A;            //storing marks of team 2 of (r1) in this
	
	b_r2= a_r1 + b;   //storing marks of team one of (r1 + r2) in this
	B_r2= A_r1 + B;   //storing marks of team 2 of (r1 + r2) in this
	
	c_r3= b_r2 + c;   //storing marks of team 1 of (r1 + r2 + r3) in this
	C_r3= B_r2 + C;   //storing marks of team 2 of (r1 + r2 + r3) in this
	
	printf("\n\t\t Team-1");
	printf("\t Team-2 ");
	printf("\t Leader");
	printf("\t Lead \n");
	
	printf("round 1 :");
	printf("\t %d",a_r1);
	printf("\t %d ",A_r1);
	
	if(a_r1 > A_r1)
	{
		lead1[0]= a_r1 - A_r1;
		lead1[1]=1;
		printf("\t\t T-%d",lead1[1]);
		printf("\t %d \n",lead1[0]);
	}
	else
	{
		lead1[0]= A_r1 - a_r1;
		lead1[1]=2;
		printf("\t\t T-%d",lead1[1]);
		printf("\t %d \n",lead1[0]);
	}
	
	printf("round 2 :");
	printf("\t %d",b_r2);
	printf("\t %d ",B_r2);
	
	if(b_r2 > B_r2)
	{
		lead2[0]= b_r2 - B_r2;
		lead2[1]=1;
		printf("\t\t T-%d",lead2[1]);
		printf("\t %d \n",lead2[0]);
	}
	else
	{
		lead2[0]= B_r2 - b_r2;
		lead2[1]=2;
		printf("\t\t T-%d",lead2[1]);
		printf("\t %d \n",lead2[0]);
	}
	
	printf("round 3 :");
	printf("\t %d",c_r3);
	printf("\t %d ",C_r3);
	
	if(c_r3 > C_r3)
	{
		lead3[0]= c_r3 - C_r3;
		lead3[1]=1;
		printf("\t\t T-%d",lead3[1]);
		printf("\t %d \n",lead3[0]);
	}
	else
	{
		lead3[0]= C_r3 - c_r3;
		lead3[1]=2;
		printf("\t\t T-%d",lead3[1]);
		printf("\t %d \n",lead3[0]);
	}
	
	if(lead1[0] > lead2[0] && lead1[0] > lead3[0])
	{
		printf("The winner of tournament is team %d with highest lead %d.",lead1[1],lead1[0]);
	}
	if(lead2[0] > lead1[0] && lead2[0] > lead3[0])
	{
		printf("The winner of tournament is team %d with highest lead %d.",lead2[1],lead2[0]);
	}
	if(lead3[0] > lead1[0] && lead3[0] > lead2[0])
	{
		printf("The winner of tournament is team %d with highest lead %d.",lead3[1],lead3[0]);
	}
}


void problem42()
{
	int a, b, c;            //team one with 3 rounds
	int A, B, C;           //team two with 3 rounds
	
	int lead1[2];         //(round one) stores the score and team number
	int lead2[2];        //(round two) stores the score and team number
	int lead3[2];       //(round three) stores the score and team number
	int a_r1 = 0, b_r2 = 0, c_r3 = 0;
	int A_r1 = 0, B_r2 = 0, C_r3 = 0;

   printf("\n *** The Lead Game Problem *** \n");

   processing_problem42();
   
}


//_________________________________________Assignment#4 Problem#3________________________________________________

int input_problem43()
{
	int RN;
	printf("\n Generate a random number= ");
	scanf("%d",&RN);
    return RN;
}

void processing_problem43(int RN)
{
	int N,k;
	for(k=1;k<=5;k++)
	{	    
		printf(" Guess %d: \t",k);
	    scanf("%d",&N);
	    if(N==RN)
	    {
	        printf(" Well done! You win the game.\n");
	        break;        
	    }
	    else if(N>RN)
	    {
	        printf("\t\tToo high\n");
	    }
	    else
	    {
	        printf("\t\tToo low\n");         
	    }
	    if(N!=RN && k==5)
		{
	    printf("\tGame over!");
		}		
	}
}

void problem43()
{
   int RN;
   
   printf("\n *** Guessing Game Problem *** \n");

   RN = input_problem43();
   printf("\n You will got 5 chances to guess a number...\n");
   
   processing_problem43(RN);
   

}

//_________________________________________Assignment#4 Problem#4________________________________________________

int input_problem44()
{
	int n1;
    printf(" Enter the number= ");
    scanf("%d",&n1);
    return n1;
}
void processing_problem44(int n1)
{
	int r1, nn, s_1=0;
	int n2, r2, s_2=0;
	int n3, r3, s_3=0;
    nn=n1;
    while(nn>0)
    {
        r1=nn%10;
        s_1=s_1+r1;
        nn=nn/10;
    }
    printf(" The sum of %d is %d\n",n1,s_1);
    if(s_1<10)
    {
        printf(" The super digit is %d\n",s_1);
    }
    else
    {
        n2=s_1;
        
        while(n2>0)
        {
            r2=n2%10;
            s_2=s_2 + r2;
            n2 = n2/10;
        }
        printf(" The sum of %d is %d\n",s_1,s_2);
        if(s_2<10)
        {
            printf(" Super digit is %d\n",s_2);
        }
        else
		{
		 n3=s_2;
        if(s_2>=10)
        {
        while(n3>0)
        {
            r3=n3 %10;
            s_3=s_3+r3;
            n3=n3/10;
        }
        printf(" The sum of %d is %d\n",s_2,s_3);
        }
        if(s_3<10)
        {
            printf(" The super digit is %d",s_3);
		}        
        }
    }
}

void problem44()
{
   int n1;
   
   printf("\n *** Super Digit Problem *** \n");

   n1 = input_problem44();

   processing_problem44(n1);
   

}

//_________________________________________Assignment#4 Problem#5________________________________________________

int input_problem45()
{
	int p;
    printf("Your chess board size= ");
    scanf("%d",&p);
	return (p);
}
int processing_problem45(int p)
{
	int s=0,k=0,q,t,sq;
    q=p;
    t=p;
    while(k<p)
    {
        q=q-1;
        sq=(p-q)*(p-q);
        printf(" No of squares %d x %d is %d\n",t,t,sq);
        s=s+sq;
        k++;
        t--;
    }
    return s;
}

void output_problem45(int s)
{
	printf(" >> Total number of squares in chess board is %d",s);
}
void problem45()
{
   int p,s;
 
   printf("\n *** Chess Board Problem *** \n");

   p = input_problem45();

   s=processing_problem45(p);
   
   output_problem45(s);

}

