#include<stdio.h>
#include <string.h>
#include "assignment5.h"

//_________________________________________Assignment#5 Problem#1________________________________________________

int input_problem51()
{
	int n;
	printf("N:");
	scanf("%d",&n);
	return(n);
}
void output_problem51(int k,int j,int check)
{
	if(check==1)
    printf("%d ",k);
    if(check==2)
	printf("%d ",j);
    if(check==0)
	printf("\n");
}
void processing_problem51(int n)
{
	int i,j,k,count=0,check=0;
	for(i=n;i>0;i--)
	{
		for(k=count;k>0;k--)
		{
			check=1;
			output_problem51(k,j,check);
		}
		for(j=0;j<i;j++){
			check=2;
			output_problem51(k,j,check);
		}
		check=0; 
		output_problem51(k,j,check);
		count++;}
}
void problem51()
{
   int n;
 
   printf("\n *** Matrix Problem *** \n");

   n = input_problem51();

   processing_problem51(n);

}

//_________________________________________Assignment#5 Problem#2________________________________________________

int input_problem52()
{
	int size;
	printf("Enter Size:");
	scanf("%d",&size);
	return(size);
}
void output_problem51(int j,int check)
{
	if(check==1)
    printf("%d ",j);
    if(check==2)
	printf("%d ",j);
    if(check==0)
	printf("\n");
}
void processing_problem52(int size)
{
	int i,j,k,check=0;
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=i;j++)
		{
		check=1;
		output_problem51(j,check);	
		}
		check=0;
		output_problem51(j,check);
	}
	for(i=size;i>0;i--)
	{
		for(j=1;j<i;j++)
		{
		check=2;
		output_problem51(j,check);	
		}
		check=0;
		output_problem51(j,check);
	}
}
void problem52()
{
   int size;
 
   printf("\n *** Half Diamond Pattern Problem *** \n");

   size = input_problem52();

   processing_problem52(size);   
}


//_________________________________________Assignment#5 Problem#3________________________________________________

int input_problem53()
{
	int number;
	printf(" Give a for conversion: ");
	scanf("%d",&number);
	return (number);
}
void processing_problem53(int number)
{
	int a[20],n,i,j;

	for(j=0; j<=number; j++) 
	{
	n = j;
	for(i=0;n>0;i++) 
	{
	    a[i]=n%2;
	    n=n/2;
	}
	printf("\n ~ "); 
	if(j==0)
	printf("00");
	
	for(i=i-1;i>=0;i--) 
	{
	    if (j == 1)
	    printf("0");
	    printf("%d",a[i]);
	}
	}
}
void problem53()
{
   int number;
 
   printf("\n *** Binary Number Series Problem *** \n");

   number = input_problem53();

   processing_problem53(number);

}


//_________________________________________Assignment#5 Problem#4________________________________________________

int input_problem54()
{
	int num,r,k;  
    printf("Enter a positive integer: ");  
    scanf("%d",&num);
	return num;
}
void processing_problem54(int num)
{
	int r, k;
	for(r=1;r<=num;r++)  
    {  
    printf("\t");
        for(k=1;k<=r;k++)  
        {  
        if(k==1|| r==k || r==num )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
}
void output_problem54(int num)
{
	if(num>0)
    {
	processing_problem54(num);    
    }
    else
    printf("Please Enter a positive integer!");
}
void problem54()
{
   int num;
 
   printf("\n *** Hollow Right Triangle Problem *** \n");

   num = input_problem54();
   
   output_problem54(num);

}


//_________________________________________Assignment#5 Problem#5________________________________________________

int input_problem55(){
  int number;
  printf("Number of Balls:");
  scanf("%d",&number);
  return number;
}

int processing_problem55(int number)
{   int j=1,i;
	for(i=0;number>j;i++)
	j=3*j;	
	if(number==1)
	i=1;
	return i;
	}
	
void output_problem55(int i,int number)
{
	printf("You have to use weigh at least %d times to get find the heavier ball among given %d balls.",i--,number);
	}	
	
void problem55()
{
   int number,i;
 
   printf("\n *** n-Ball Problem *** \n");

   number = input_problem55();

   i=processing_problem55(number);
   
   output_problem55(i,number);

}

//_________________________________________Assignment#5 Problem#6________________________________________________

int input_problem56(){
	int num;
	printf("Number:");
	scanf("%d",&num);
	return num;
}
int processing_problem56(int num,int copy)
{
	int i;
    i=num%10;
    copy=copy*10+i;
    if(num/10!=0)
    processing_problem56(num/10,copy);
	else
	return copy;
}
void output_problem56(int num,int copy)
{
	if(copy==num)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
}
void problem56()
{
   int num,copy=0;
 
   printf("\n *** Palindrome Problem *** \n");

   num = input_problem56();

   copy=processing_problem56(num,copy);
   
   output_problem56(num,copy);
}

//_________________________________________Assignment#5 Problem#7________________________________________________

int input_problem57()
{
int terms;
printf("Number of Terms:");
scanf("%d",&terms);
return terms;
}
int processing_problem57(int i,int c,int d){
	if(i!=0)
	{
	int u;
	u=c;
	c=d+c;
	d=u;
	printf("%d,",c);
	processing_problem57(i-1,c,d);
	return 0;}
	else
	return c;
}
void output_problem57(int output){
    printf("%d,",output);
}
void problem57()
{
   int output=0,d=1,terms;
 
   printf("\n *** Fibonacci Series Problem *** \n");

   terms = input_problem57();
   
   output_problem57(output);
   
   output=processing_problem57(terms,output,d);   
}


//_________________________________________Assignment#5 Problem#8________________________________________________

void input_problem58(char *str1,char *str2)
{
	printf("Friend 1 String:");
	scanf("%s",str1);
	printf("Friend 2 String:");
	scanf("%s",str2);
	printf("Mingled String:");
}
void processing_problem58(char str1[50], char str2[50],char *str3)
{
	int i,j=-1;
	for(i=0;str1[i]!='\0';i++)
	{j++;
	str3[j]=str1[i];
	j++;
	str3[j]=str2[i];
	}
}
void output_problem58(char str3[50])
{
printf("%s",str3);	
}
void problem58()
{
   char str1[50],str2[50],str3[50];
   int num,copy=0;
 
   printf("\n *** String Mingling Problem *** \n");
   	
   input_problem58(str1,str2);
   processing_problem58(str1,str2,str3);
   output_problem58(str3);
}


//_________________________________________Assignment#5 Problem#9________________________________________________

char input_problem59()
{
    char cc[10];
    printf("\nSequence of colors:");
    fflush(stdin);
    scanf("%s",cc);
}

void processing_problem59(char cc[10])
{
int rr,yy,bb,gg,j,diff1, diff2;
rr=0;                    //rr is red color
yy=0;                    //yy is yellow color
bb=0;                    //bb is blue color
gg=0;                   //gg is green color
    
int color = strlen(cc);
for(j=0;j<color;j++)
{
if(cc[j]=='r'||cc[j]== 'R')
rr++;

if(cc[j]=='g'||cc[j]== 'G')
gg++;
        
if(cc[j]=='b'||cc[j]== 'B')
bb++;

if(cc[j]=='y'||cc[j]== 'Y')
yy++;
}

diff1= rr-gg;
diff2= yy- bb;
 if(rr == gg && yy == bb && diff1 <=1 && diff2 <=1)
{
 printf("\n>> The given sequence is full of colors!");
}
else
printf("\n>> The given sequence is not full of colors!");
}

void problem59()
{
   char cc[10];
 
   printf("\n *** Sequence Full Of Colors Problem *** \n");
   
   cc[10]= input_problem59();
   
   processing_problem59(cc);
}

//_________________________________________Assignment#5 Problem#10________________________________________________

void input_problem510(char *human)
{
printf("Bot:Hi! How can I help you?\nHuman:");
gets(human);
}
void processing_problem510(char human[60])
{    int i=1;
while(i)
{
if (strcmp(human,"Do you have any outlet in Karachi?")==0)
printf("Bot:Yes we have an outlet in Lucky One Mall, Karachi.\nHuman:");
else if(strcmp(human,"International shipping is available?")==0)
printf("Bot:Yes international shipping is available for you.\nHuman:");
else if(strcmp(human,"Is there any way to be updated about your end of season sale?")==0)
printf("Bot:Provide your email address to be updated.\nHuman:");
else if(strcmp(human,"Delivery Charges for local customers?")==0)
printf("Bot:Delivery is free nationwide.\nHuman:");
else if(strcmp(human,"Can you please provide the contact information for complains?")==0)
printf("Bot:Please register your complains at complains@abc.pk\nHuman:");	
else if(strstr(human,"Good Bye"))
{printf("Bot:Good Bye, Have a nice day.");
break;}
gets(human);}
}
void problem510()
{
   char human[60];
 
   printf("\n *** Chat Bot Problem *** \n");

   input_problem510(human);
   processing_problem510(human);
}
