#include<stdio.h>
#include<stdlib.h>

	
void main()

{
int x;
int a[20],b[20],c[20],d[20],i,j,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10,m,n;

m:for(;;)



{
printf("\n\n\n\n\nPLEASE ENTER THE QUESTION YOU WANT TO ATTEMPT\n\n");
scanf("%d",&x);



switch (x)

	{
	Q1:	case 1:

printf("\n\n\n\n1. Learn from yesterday, live for today, hope for tomorrow. The important thing is not to stop ____________.’ Fill in the blank to complete this quotation by Albert Einstein.\n\n");
printf("1) Wishing 2) Questioning 3) Thinking\n\n");

scanf("%d",&a[0]);
//Answer: Questioning.
printf("\n\n\n\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n\n");
scanf("%d",&d[0]);
system("clear");
 

	if(d[0]==4)
	{ goto Q1;}

	else if(d[0]==5)
	{ goto Q2;}
	
	else if(d[0]==6)
	{ goto m;}


		
		
		
	Q2:	case 2:

printf("\n\n\n\n2. The name of which spice comes from the French word for ‘nail’?\n\n");
printf("1) Cinnamon 2) Cardamom 3) Clove\n\n\n");

scanf("%d",&a[1]);
//Answer: Clove.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[1]);system("clear");

	if(d[1]==4)
	{ goto Q1;}

	else if(d[1]==5)
	{ goto Q3;}
	
	else if(d[1]==6)
	{ goto m;}

	Q3:	case 3:

printf("\n\n\n\n3. In India, the train Lifeline Express is a…\n\n");
printf("1) Hospital 2) Bank 3) Primary School\n\n\n");

scanf("%d",&a[2]);
//Answer: Hospital.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[2]);system("clear");

	if(d[2]==4)
	{ goto Q2;}

	else if(d[2]==5)
	{ goto Q4;}
	
	else if(d[2]==6)
	{ goto m;}

	Q4:	case 4:

printf("\n\n\n\n4. Which Asian mountain is also known as the Savage Mountain due to the extreme difficulty of ascent?\n\n");
printf("1) Kanchenjunga 2) K2 3) Lhotse\n\n\n");

scanf("%d",&a[3]);
//Answer: K2.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[3]);system("clear");

	if(d[3]==4)
	{ goto Q3;}

	else if(d[3]==5)
	{ goto Q5;}
	
	else if(d[3]==6)
	{ goto m;}system("clear");
		

	Q5:	case 5:

printf("\n\n\n\n5. In 1964, which portfolio was given to Indira Gandhi in the government of Lal Bahadur Shastri?\n\n");
printf("1) Defence 2) Home 3) Information and Broadcasting\n\n\n");

scanf("%d",&a[4]);
//Answer: Information and Broadcasting.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[4]);system("clear");

	if(d[4]==4)
	{ goto Q4;}

	else if(d[4]==5)
	{ goto Q6;}
	
	else if(d[4]==6)
	{ goto m;}

		

	Q6:	case 6:

printf("\n\n\n\n6. In Alice’s Adventures in Wonderland, which game was played by the Queen of Hearts using hedgehogs as balls?\n\n");
printf("1) Quintet 2) Quidditch 3) Croquet\n\n\n");

scanf("%d",&a[5]);
//Answer: Croquet.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[5]);system("clear");

	if(d[5]==4)
	{ goto Q5;}

	else if(d[5]==5)
	{ goto Q7;}
	
	else if(d[5]==6)
	{ goto m;}
		

	Q7:	case 7:

printf("\n\n\n\n7. With which unfortunate incident would you associate the warplane Enola Gay?\n\n");
printf("1) Sinking of the ship Bismark 2) The Hiroshima bombing 3) Storming of Bastille\n\n\n");

scanf("%d",&a[6]);
//Answer: The Hiroshima bombing.
printf("\n\n\n\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n\n");
scanf("%d",&d[6]);system("clear");

	if(d[6]==4)
	{ goto Q6;}

	else if(d[6]==5)
	{ goto Q8;}
	
	else if(d[6]==6)
	{ goto m;}
		

	Q8:	case 8:

printf("\n\n\n\n8. Odhra Magadha is the precursor to which Indian dance form?\n\n");
printf("1) Kuchipudi 2) Kathak 3) Odissi\n\n\n");

scanf("%d",&a[7]);
//Answer: Odissi.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[7]);system("clear");

	if(d[7]==4)
	{ goto Q7;}

	else if(d[7]==5)
	{ goto Q9;}
	
	else if(d[7]==6)
	{ goto m;}

	Q9:	case 9:
 

printf("\n\n\n\n9. Who composed music for the 1969 film Goopy Gyne Bagha Byne?\n\n");
printf("1) Satyajit Ray 2) Ravi Shankar 3) Shiv-Hari\n\n\n");

scanf("%d",&a[8]);
//Answer: Satyajit Ray.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[8]);system("clear");

	if(d[8]==4)
	{ goto Q8;}

	else if(d[8]==5)
	{ goto Q10;}
	
	else if(d[8]==6)
	{ goto m;}
		

	Q10:	case 10:

printf("\n\n\n\n10. Where in the human body is the stapedius muscle situated?\n\n");
printf("1) Nose 2) Ears 3) Leg\n\n\n");

scanf("%d",&a[9]);
//Answer: Ears.
printf("\n4)BACK\t\t5)NEXT\t\t6)OTHER QUESTION\n");
scanf("%d",&d[9]);system("clear");

	if(d[9]==4)
	{ goto Q9;}

	else if(d[9]==5)
	{ goto n;}
	
	else if(d[9]==6)
	{ goto m;}

		
	}
}

n:
switch (a[0])
{
	case 1: 
		b[0]=1; break;
	case 2: 
		b[0]=0;break;
	case 3: 
		b[0]=0; break;

}
switch (a[1])
{
	case 1: 
		b[1]=0;break;
	case 2: 
		b[1]=0;break;
	case 3: 
		b[1]=1; break;

}
switch (a[2])
{
	case 1: 
		b[2]=1;break;
	case 2: 
		b[2]=0;break;
	case 3: 
		b[2]=0; break;


}
switch (a[3])
{
	case 1: 
		b[3]=0;break;
	case 2: 
		b[3]=1;break;
	case 3: 
		b[3]=0; break;

}
switch (a[4])
{
	case 1: 
		b[4]=0;break;
	case 2: 
		b[4]=0;break;
	case 3: 
		b[4]=1; break;


}
switch (a[5])
{
	case 1: 
		b[5]=0;break;
	case 2: 
		b[5]=0;break;
	case 3: 
		b[5]=1; break;

}
switch (a[6])
{
	case 1: 
		b[6]=0;break;
	case 2: 
		b[6]=1;break;
	case 3: 
		b[6]=0; break;

}
switch (a[7])
{
	case 1: 
		b[7]=0;break;
	case 2: 
		b[7]=0;break;
	case 3: 
		b[7]=1; break;

}
switch (a[8])
{
	case 1: 
		b[8]=1;break;
	case 2: 
		b[8]=0;break;
	case 3: 
		b[8]=0; break;


}
switch (a[9])
{
	case 1: 
		b[9]=0;break;
	case 2: 
		b[9]=1;break;
	case 3: 
		b[9]=0; break;

}

for(i=1;i<=9;i++)
	{
		j=i-1;
		c[0]=0;
		c[i]=c[j]+b[i];
	}

c[10]=c[9]+b[0];

printf("\n\n\n\n\n\n\n\n\n\t\t\t\tYOUR MARKS ARE %d\n\n\n\n\n\n",c[10]);

}


