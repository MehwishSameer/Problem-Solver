#include<stdio.h>
#include <string.h>
#include "Assignment3.h"

//_________________________________________Assignment#3 Problem#1________________________________________________

int input_problem31()
{
 int unitsConsume;
	printf("Enter units consume by consumer: ");
    scanf("%d",&unitsConsume);
 return unitsConsume;	
}

int processing_problem31(int unitsConsume)
{
  int  keCharges;
 float salesTax;
 float totalCharges;
   if(unitsConsume<=200){
     keCharges=unitsConsume*8.11;
    }
   else if(unitsConsume>200 && unitsConsume<=300){
     keCharges=(200*8.11)+((unitsConsume-200)*10.20);
    }
   else if(unitsConsume>300){
     keCharges=(200*8.11)+((300-200)*10.20)+((unitsConsume-300)*13.40);
    }

      printf("KE charges is: %d",keCharges);
      salesTax=keCharges*0.13;
	  printf("\nSales Tax: %f",salesTax);

    totalCharges=salesTax+keCharges;
  
  return totalCharges;
}

void output_problem31(float totalCharges)
{
	printf("\nElectricity Charges to pay: %f",totalCharges);
}

void problem31()
{
	int unitsConsume;
	float totalCharges;
	
	printf("\n *** Calculating Electricity Bill Problem *** \n\n");
	
	unitsConsume = input_problem31();
	totalCharges = processing_problem31(unitsConsume);
	output_problem31(totalCharges);
}

//_________________________________________Assignment#3 Problem#2________________________________________________

int input_problem32()
{
  int num;	
	printf("enter number to generate code:");
    scanf("%d",&num);
    return num;
}

void processing_problem32(int num)
{
	int rming,s,result=0;
	
	  s=num;
 while(num>0)
 {
        rming=num%10;
        result= result+rming;
        num= num/10;
   }
    
	
	if(result%2==0) {
        printf("\nYour Special Code is : %d0",s);
    }
    else {
        printf("\nYour Special Code is : %d1",s);
    }
  	
}

void problem32()
{
	int number;
	
	printf("\n *** Generating Special Code Problem *** \n\n");
	
	number = input_problem32();
    processing_problem32(number);
}

//_________________________________________Assignment#3 Problem#3________________________________________________

void processing_problem33()
{
	char subj;
	int marks,i;
	int total_marks=0;
	int credit_hrs;
	float sum_of_gp=0;
	float gp;
	float total_gpa;
	
	
	for(i=1;i<=7;i++)
	{
		printf("\n\n **NAME** of your SUBJECT(enter only first character):");
		scanf(" %c",&subj);
		printf("\nEnter the **MARKS** of your SUBJECT:");
		scanf("%d",&marks);
		printf("\nEnter the **CREDIT HOURS** too:");
		scanf("%d",&credit_hrs);
		
		if(marks>=86)
		{
			printf("\n > You got A grade and 4.00 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=80)
		{
			printf("\n > You got A- grade and 3.67 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=76)
		{
			printf("\n > You got B+ grade and 3.33 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=72)
		{
			printf("\n > You got B grade and 3.00 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=68)
		{
			printf("\n > You got B- grade and 2.67 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=64)
		{
			printf("\n > You got C+ grade and 2.50 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=60)
		{
			printf("\n > You got C grade and 2.00 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=57)
		{
			printf("\n > You got C- grade and 1.67 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=54)
		{
			printf("\n > You got D+ grade and 1.33 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else if(marks>=50)
		{
			printf("\n > You got D grade and 1.00 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		else 
		{
			printf("\n > You got F grade and 0.00 GP for ' %c subject' and '%d marks'", subj,marks);
			printf("\n > re-enter the GP you got:");
			scanf("%f",&gp);
			sum_of_gp=(gp*credit_hrs)+sum_of_gp;
		}
		total_marks= total_marks + marks;
		
	}
	
	total_gpa=sum_of_gp/17;
	printf("\n\n >>> TOTAL GPA= '%f' <<<\n",total_gpa);
}

void problem33()
{
	printf("\n *** Calculating GPA Problem *** \n\n");
	processing_problem33();
}

//_________________________________________Assignment#3 Problem#4________________________________________________

 
void processing_problem34()
{
	int selectRoom,persons;
  
	printf("\nEnter number of persons: ");
    scanf("%d",&persons);

    printf("Enter room type (1/2): ");
    scanf("%d",&selectRoom);
	
	char id;
    int  chargesIs,dayStay;
    int total=0;
    int perPerson;
	
printf("Enter number of days: ");
scanf("%d",&dayStay);

printf("Do you have student card (y/n): ");
scanf(" %c",&id);

if(selectRoom == 1){
    chargesIs=(persons*5000)+10000;
}
else if (selectRoom == 2){
	chargesIs=(persons*4000)+8000;
}
total=chargesIs*dayStay;

//Discounts
if(dayStay >= 7 && id == 'y') {
	total=total*0.7;
    printf("\nYour room charges are: %d",total);
}
else if(dayStay >= 7) {
	total=total*0.8;
	printf("\nYour room charges are: %d",total);
}
else if(id == 'y') {
	total=total*0.9;
	printf("\nYour room charges are: %d",total);
}
else{
	printf("\nYour room charges are: %d",total);
}

perPerson=total/persons;
printf("\nPer person Expense for stay in hotel: %d",perPerson);
}

void problem34()
{
	printf("\n *** Selecting Room Problem *** \n\n");
	
	processing_problem34();
}

//_________________________________________Assignment#3 Problem#5________________________________________________
processing_problem35()
{
	  char check;
    int y=0;

	    printf("\nfever (y/n): ");
        scanf(" %c",&check);
        if(check=='y'){
            y=y+1;
        }
        
        printf("cough (y/n): ");
        scanf(" %c",&check);
        if(check=='y'){
            y=y+1;
		}
  	 	
        printf("lost taste or smell (y/n): ");
        scanf(" %c",&check);
        if(check=='y'){
            y=y+1;
        }
 		
        printf("soar throat (y/n): ");
        scanf(" %c",&check);
        if(check=='y'){
            y=y+1;
        }
 	
        printf("diarrhea (y/n): ");
        scanf(" %c",&check);
        if(check=='y')
        {
            y=y+1;
        }
		
		
    if(y>=3)
    {
        printf("\nYou have more than 3 symptoms of Covid-19 System recommend you to go for testing immediately");
        }
    else 
    {
        printf("\nYou have only 2 symptoms of Covid-19 System recommend you to stay at home");
        }
}

void problem35()
{
  printf("\n *** Go for Covid-19 Test or not Problem *** \n\n");
   processing_problem35();  
}
