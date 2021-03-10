#include<stdio.h>
#include<conio.h>
int main(void)
{
int c[20],gp[20],i,sum=0,csum=0,sum1=0,csum1=0,sum2=0,csum2=0,n;
char g[20];
float cgpa;
char ch;

printf("\n\t\t\t CGPA  Calculator");
/* The option to enter the number of courses and their grades are provided*/
printf("\n\n Enter number of Courses for first semester :");
scanf("%d",&n);
/* The grades and credits will be entered for both first and second semesters */
for(i=0;i<n;i++)
  {
   printf("\n\n Enter Grade of Course %d For First Semester :",i+1);
   scanf("%c",&g[i]);
  ch = getchar();

    if(ch=='A'||ch=='a')
     gp[i]=5.0;
    else if(ch=='B'||ch=='b')
     gp[i]=4.0;
    else if(ch=='C'||ch=='c')
     gp[i]=3.0;
    else if(ch=='D'||ch=='d')
     gp[i]=2.0;
    else if(ch=='E'||ch=='e')
     gp[i]=1.0;
    else
     gp[i]=0;
    printf("\n\n Enter credits of Course %d :",i+1);
   scanf("%d",&c[i]);


   sum1=sum1+c[i]*gp[i];
   csum1=csum1+c[i];
  }
  printf("\n\n Enter number of Courses For Second Semester :");
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
printf("\n\n Enter Grade of Course %d of second semester  :",i+1);
   scanf("%c",&g[i]);
  ch = getchar();

    if(ch=='A'||ch=='a')
     gp[i]=5.0;
    else if(ch=='B'||ch=='b')
     gp[i]=4.0;
    else if(ch=='C'||ch=='c')
     gp[i]=3.0;
    else if(ch=='D'||ch=='d')
     gp[i]=2.0;
    else if(ch=='E'||ch=='e')
     gp[i]=1.0;
    else
     gp[i]=0;
    printf("\n\n Enter credits of Course %d :",i+1);
   scanf("%d",&c[i]);


   sum2=sum2+c[i]*gp[i];
   csum2=csum2+c[i];
  }
  sum=sum1+sum2;
  csum=csum1+csum2;
cgpa=(float)sum/csum;

printf("\n\n\n\n\n\n\t\t\n\n\t\t\t\t YOUR CGPA IS  \"%f\" ",cgpa);
getch();
}
