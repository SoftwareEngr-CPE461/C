#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>

int main ()
{
char ch;
int i, n, credit[100], grade[100];
float gpa1=0, result1=0,result2=0, totCredit1= 0.0, totCredit2= 0.0, gpa2, cgpa=0;

printf("\t\t\tShalom's CGPA Calculator\n\n");
printf("\n\t\tFirst Semester\n");
//collect number of courses
printf("\nEnter number of Courses for first semester :");
scanf("%d",&n);
/* The grades and credits will be entered for both first and second semesters */
for(i=0;i<n;i++)
  {
      //ask user for the course grade input
   printf("\n\n Enter Grade of Course %d For First Semester :",i+1);
   scanf("%c",&grade[i]);
  ch = getchar();

  //set the right value for the grades
    if(ch=='A'||ch=='a')
     grade[i]=5.0;
    else if(ch=='B'||ch=='b')
     grade[i]=4.0;
    else if(ch=='C'||ch=='c')
     grade[i]=3.0;
    else if(ch=='D'||ch=='d')
     grade[i]=2.0;
    else if(ch=='E'||ch=='e')
    grade[i]=1.0;
    else
     {printf("\n\n wrong input!!");
     exit(0); }

     //ask user for the course credit input
    printf("\n\n Enter credits of Course %d :",i+1);
   scanf("%d",&credit[i]);

//first semester gpa calculation
   result1+=credit[i]*grade[i];
   totCredit1+=credit[i];
   gpa1 = result1/totCredit1;
  }

printf("\n\t\tSecond Semester\n");
//collect number of courses
printf("\nEnter number of Courses for Second semester :");
scanf("%d",&n);
/* The grades and credits will be entered for both first and second semesters */
for(i=0;i<n;i++)
  {
      //ask user for the course grade input
   printf("\n\n Enter Grade of Course %d For First Semester :",i+1);
   scanf("%c",&grade[i]);
  ch = getchar();

  //set the right value for the grades
    if(ch=='A'||ch=='a')
     grade[i]=5.0;
    else if(ch=='B'||ch=='b')
     grade[i]=4.0;
    else if(ch=='C'||ch=='c')
     grade[i]=3.0;
    else if(ch=='D'||ch=='d')
     grade[i]=2.0;
    else if(ch=='E'||ch=='e')
    grade[i]=1.0;
    else
     {printf("\n\n wrong input!!");
     exit(0); }

     //ask user for the course credit input
    printf("\n\n Enter credits of Course %d :",i+1);
   scanf("%d",&credit[i]);

//second semester gpa calculation
   result2+=credit[i]*grade[i];
   totCredit2+=credit[i];
   gpa2 = result2/totCredit2;
  }
  //cgpa calculation
  cgpa = (gpa1 + gpa2)/2;
printf("\n\t\t\t\tYour CGPA is: %.4f.\n", cgpa);
return 0;
}
