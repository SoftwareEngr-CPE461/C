#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main() {
        char str[100], ch,name[20];
        int i, grade[5];
        float credit[5], gpa = 0.0, totCredit = 0.0;
        printf("THIS PROGRAM DISPLAYS THE TRANSCRIPT OF THE RECORD OF A STUDENT AS INPUTED\n");
        for (i = 0; i < 5; i++) {
               /* get the grade and credits from the user */
                printf("\nCourse %d( Enter The Grade (in cap) and Credit):", i + 1);
                ch = getchar();
                grade[i] = ch;
                scanf("%f", &credit[i]);
                getchar();
        }
    /* print the input grades and credits */
        printf("\n=========================================");
        printf("\n          TRANSCRIPT OF STUDENT          ");
        printf("\n=========================================");
        printf("\n Subject     |   Grade    |      Credit\n");
        for (i = 0; i < 5; i++) {
                printf("      %d      |      %c     |        %.0f\n", i + 1, grade[i], credit[i]);
        }

        /* TO calculate the GPA value */
        for (i = 0; i < 5; i++) {
                switch (grade[i]) {
                        case 'A':
                                gpa = gpa + 5.0 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;
                        case 'B':
                                gpa = gpa + 4.0 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'C':
                                gpa = gpa + 3.0 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'D':
                                gpa = gpa + 2.0 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'F':
                                gpa = gpa + 1.0 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        default:
                                printf("Given Wrong grade!!\n");
                                exit(0);

                }
        }
        printf("\n  Total credits are : %f", totCredit);
        gpa = gpa / totCredit;
        printf("\n  Your GPA is : %.2f\n", gpa);
        return 0;
  }
