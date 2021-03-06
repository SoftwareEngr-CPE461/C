#include <stdio.h>
#include <string.h>

int main()
{
   int j,z,y,x,w,v,choice;
   float t;
   char score[9];
   printf("This is a program to display your gpa for your 400 level first semester \n");
    printf("\nEnter the grades of your four 3 credit load courses\n");

       for(j=0; j<4; j++)
   {
       scanf("%s", &score[j]);
   }

     for(j=0; j<4; j++)
     {
         if(score[j] == 'A')
         {
             z =5*3;

         }
         else if (score[j] == 'B')
         {
            z =4*3;
         }
         else if(score[j] == 'C')
         {
             z = 3*3;
         }
          else if(score[j] == 'D')
         {
             z= 2*3;
         }
          else if(score[j] >= 30)
         {
           z= 0*3;
         }


     }     w = z + z + z + z;

     printf("\nenter the grades of your four 2 credit load courses\n");

       for(j=0; j<4; j++)
   {
       scanf("%s", &score[j]);
   }

     for(j=0; j<4; j++)
     {
         if(score[j] == 'A')
         {
             y =5*2;

         }
         else if (score[j] == 'B')
         {
            y =4*2;
         }
         else if(score[j] == 'C')
         {
             y = 3*2;
         }
          else if(score[j] == 'D')
         {
             y = 2*2;
         }
          else if(score[j] >= 'F')
         {
            y= 0*2;
         }


     }     v = y + y + y + y;

     printf("\nenter your grades that corresponds accordingly to the one credit load course\n");

       for(j=0; j<1; j++)
   {
       scanf("%s", &score[j]);
   }

     for(j=0; j<1; j++)
     {
         if(score[j] == 'A')
         {
             x =5*1;

         }
         else if (score[j] == 'B')
         {
            x =4*1;
         }
         else if(score[j] == 'C')
         {
             x = 3*1;
         }
          else if(score[j] == 'D')
         {
             x = 2*1;
         }
          else if(score[j] == 'F')
         {
            x= 0*1;
         }

     }

           t = (w + v + x)/21;
           printf("\nyour gpa for 400 level first semester is %.2f", t);
    return 0;
}

