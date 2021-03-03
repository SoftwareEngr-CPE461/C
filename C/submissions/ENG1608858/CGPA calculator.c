int main()
{
    /* This is a CGPA calculator that calculates the gpa of both semesters of a session and then calculates the CGPA.
    TCU means total course unit. TQP means total quality point. the addition of 's' to both abbreviation signifies second semester. qp means quality point.*/

    float TCU, TCU1, TCU2, TCU3, TCU4, TCU5, TCU6, TCU7, TCU8, TCU9, TCU10, TCU11, TQP, TQP1, TQP2, TQP3, TQP4, TQP5, TQP6, TQP7, TQP8, TQP9, TQP10, TQP11;
    float STCU, STCU1, STCU2, STCU3, STCU4, STCU5, STCU6, STCU7, STCU8, STCU9, STCU10, STCU11, STQP, STQP1, STQP2, STQP3, STQP4, STQP5, STQP6, STQP7, STQP8, STQP9, STQP10, STQP11;
    char coursecode, coursecode1, coursecode2, coursecode3, coursecode4, coursecode5, coursecode6, coursecode7, coursecode8, coursecode9, coursecode10, coursecode11, coursecode12, coursecode13, coursecode14, coursecode15;
    float courseunit, courseunit1, courseunit2, courseunit3, courseunit4, courseunit5, courseunit6, courseunit7, courseunit8, courseunit9, courseunit10, courseunit11, courseunit12, courseunit13, courseunit14, courseunit15;
    float gradepoint, gradepoint1, gradepoint2, gradepoint3, gradepoint4, gradepoint5, gradepoint6, gradepoint7, gradepoint8, gradepoint9, gradepoint10, gradepoint11, gradepoint12, gradepoint13, gradepoint14, gradepoint15;
    float qp, qp1, qp2, qp3, qp4, qp5, qp6, qp7, qp8, qp9, qp10, qp11, qp12, qp13, qp14, qp15;
    float gpa, gpa1, gpa2, gpa3, gpa4, gpa5, gpa6, gpa7, gpa8, gpa9, gpa10, gpa11, CGPA, CGPA1, CGPA2, CGPA3, CGPA4, CGPA5, CGPA6, CGPA7, CGPA8, CGPA9, CGPA10, CGPA133, CGPA134, CGPA135, CGPA136, CGPA137, CGPA138, CGPA139, CGPA140, CGPA141, CGPA142;
    float CGPA11, CGPA12, CGPA13, CGPA14, CGPA15, CGPA16, CGPA17, CGPA18, CGPA19, CGPA20, CGPA21, CGPA22, CGPA23, CGPA24, CGPA25, CGPA26, CGPA27, CGPA28, CGPA29, CGPA30, CGPA31, CGPA32, CGPA33, CGPA34, CGPA35, CGPA36, CGPA37, CGPA38, CGPA39, CGPA40, CGPA41, CGPA42, CGPA43, CGPA44, CGPA45, CGPA46, CGPA47, CGPA48, CGPA49, CGPA50, CGPA51, CGPA52, CGPA53, CGPA54, CGPA55, CGPA56, CGPA57, CGPA58, CGPA59, CGPA60;
    float CGPA61, CGPA62, CGPA63, CGPA64, CGPA65, CGPA66, CGPA67, CGPA68, CGPA69, CGPA70, CGPA71, CGPA72, CGPA73, CGPA74, CGPA75, CGPA76, CGPA77, CGPA78, CGPA79, CGPA80, CGPA81, CGPA82, CGPA83, CGPA84, CGPA85, CGPA86, CGPA87, CGPA88, CGPA89, CGPA90, CGPA91, CGPA92, CGPA93, CGPA94, CGPA95, CGPA96, CGPA97, CGPA98, CGPA99, CGPA100, CGPA101, CGPA102, CGPA103, CGPA104, CGPA105, CGPA106, CGPA107, CGPA108, CGPA109, CGPA110;
    int n_courses=0;
    float scourseunit, scourseunit1, scourseunit2, scourseunit3, scourseunit4, scourseunit5, scourseunit6, scourseunit7, scourseunit8, scourseunit9, scourseunit10, scourseunit11, scourseunit12, scourseunit13, scourseunit14, sgradepoint15;
    float sgradepoint, sgradepoint1, sgradepoint2, sgradepoint3, sgradepoint4, sgradepoint5, sgradepoint6, sgradepoint7, sgradepoint8, sgradepoint9, sgradepoint10, sgradepoint11, sgradepoint12, sgradepoint13, sgradepoint14, scourseunit15;
    float sqp, sqp1, sqp2, sqp3, sqp4, sqp5, sqp6, sqp7, sqp8, sqp9, sqp10, sqp11, sqp12, sqp13, sqp14, sqp15;
    float sgpa, sgpa1, sgpa2, sgpa3, sgpa4, sgpa5, sgpa6, sgpa7, sgpa8, sgpa9, sgpa10, sgpa11, CGPA111, CGPA112, CGPA113, CGPA114, CGPA115, CGPA116, CGPA117, CGPA118, CGPA119, CGPA120, CGPA121, CGPA122, CGPA123, CGPA124, CGPA125, CGPA126, CGPA127, CGPA128, CGPA129, CGPA130, CGPA131, CGPA132;
    int sn_courses=0;

    printf("CGPA CALCULATOR\n NOTE: this calculator should only be used if your courses are between five to fifteen, nothing more or less.\n");
    printf("FIRST SEMESTER:\n");
    printf("\nEnter the number of courses you did during your first semester:\n");
    scanf("%d", &n_courses);

    if(n_courses <= 5){
        printf("Enter your first semester courses: \n " );
        scanf("%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4);

       }else if(n_courses <= 6){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5);

        }else if(n_courses <= 7){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6);

        }else if(n_courses <= 8){
            printf("Enter your first semester courses:\n");
            scanf("%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7);

            }else if(n_courses <= 9){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8);

        }else if(n_courses <= 10){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9);

        }else if(n_courses <= 11){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10);

        }else if(n_courses <= 12){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11);

        }else if(n_courses <= 13){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12);

        }else if(n_courses <= 14){
        printf("Enter your first semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13);

        }else if(n_courses <= 15){
    printf("Enter your first semester courses:\n");
    scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13, &coursecode14);

        }else if(n_courses <= 16){
    printf("Enter your first semester courses:\n");
    scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13, &coursecode14, &coursecode15);
        }

        if(n_courses <= 5){
        printf("Enter the course unit for each course: \n " );
        scanf("%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4);

       }else if(n_courses <= 6){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5);

        }else if(n_courses <= 7){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6);

        }else if(n_courses <= 8){
            printf("Enter the course unit for each course:\n");
            scanf("%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7);

            }else if(n_courses <= 9){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8);
        }else if(n_courses <= 10){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9);

        }else if(n_courses <= 11){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10);

        }else if(n_courses <= 12){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10, &courseunit11);

        }else if(n_courses <= 13){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10, &courseunit11, &courseunit12);

        }else if(n_courses <= 14){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10, &courseunit11, &courseunit12, &courseunit13);

        }else if(n_courses <= 15){
    printf("Enter the course unit for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10, &courseunit11, &courseunit12, &courseunit13, &courseunit14);

        }else if(n_courses <= 16){
    printf("Enter the course unit for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &courseunit, &courseunit1, &courseunit2, &courseunit3, &courseunit4, &courseunit5, &courseunit6, &courseunit7, &courseunit8, &courseunit9, &courseunit10, &courseunit11, &courseunit12, &courseunit13, &courseunit14, &courseunit15);
        }

     /*the points for each grade is as follows:A - 5.0,B - 4.0,C - 3.0,D - 2.0,E - 1.0,F - 0.0*/
     printf("NOTE: the points for each grade is as follows: A - 5.0, B - 4.0, C - 3.0, D - 2.0, E - 1.0, F - 0.0\n");

     if(n_courses <= 5){
        printf("\nEnter the grade point you got for each course: \n " );
        scanf("%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4);

       }else if(n_courses <= 6){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5);

        }else if(n_courses <= 7){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6);

        }else if(n_courses <= 8){
            printf("Enter the grade point you got for each course:\n");
            scanf("%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7);

            }else if(n_courses <= 9){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8);
        }else if(n_courses <= 10){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9);

        }else if(n_courses <= 11){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10);

        }else if(n_courses <= 12){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10, &gradepoint11);

        }else if(n_courses <= 13){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10, &gradepoint11, &gradepoint12);

        }else if(n_courses <= 14){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10, &gradepoint11, &gradepoint12, &gradepoint13);

        }else if(n_courses <= 15){
    printf("Enter the grade point you got for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10, &gradepoint11, &gradepoint12, &gradepoint13, &gradepoint14);

     }else if(n_courses <= 16){
    printf("Enter the grade point you got for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &gradepoint, &gradepoint1, &gradepoint2, &gradepoint3, &gradepoint4, &gradepoint5, &gradepoint6, &gradepoint7, &gradepoint8, &gradepoint9, &gradepoint10, &gradepoint11, &gradepoint12, &gradepoint13, &gradepoint14, &gradepoint15);
     }
     qp=courseunit * gradepoint;
     qp1=courseunit1* gradepoint1;
     qp2=courseunit2* gradepoint2;
     qp3=courseunit3* gradepoint3;
     qp4=courseunit4* gradepoint4;
     qp5=courseunit5* gradepoint5;
     qp6=courseunit6* gradepoint6;
     qp7=courseunit7* gradepoint7;
     qp8=courseunit8* gradepoint8;
     qp9=courseunit9* gradepoint9;
     qp10=courseunit10* gradepoint10;
     qp11=courseunit11* gradepoint11;
     qp12=courseunit12* gradepoint12;
     qp13=courseunit13* gradepoint13;
     qp14=courseunit14* gradepoint14;
      qp15=courseunit15* gradepoint15;

     TQP=qp+qp1+qp2+qp3+qp4;
     TQP1=qp+qp1+qp2+qp3+qp4+qp5;
     TQP2=qp+qp1+qp2+qp3+qp4+qp5+qp6;
     TQP3=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7;
     TQP4=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8;
     TQP5=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9;
     TQP6=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10;
     TQP7=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10+qp11;
     TQP8=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10+qp11+qp12;
     TQP9=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10+qp11+qp12+qp13;
     TQP10=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10+qp11+qp12+qp13+qp14;
     TQP11=qp+qp1+qp2+qp3+qp4+qp5+qp6+qp7+qp8+qp9+qp10+qp11+qp12+qp13+qp14+qp15;


     TCU=courseunit+courseunit1+courseunit2+courseunit3+courseunit4;
     TCU1=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5;
     TCU2=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6;
     TCU3=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7;
     TCU4=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8;
     TCU5=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9;
     TCU6=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10;
     TCU7=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10+courseunit11;
     TCU8=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10+courseunit11+courseunit12;
     TCU9=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10+courseunit11+courseunit12+courseunit13;
     TCU10=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10+courseunit11+courseunit12+courseunit13+courseunit14;
     TCU11=courseunit+courseunit1+courseunit2+courseunit3+courseunit4+courseunit5+courseunit6+courseunit7+courseunit8+courseunit9+courseunit10+courseunit11+courseunit12+courseunit13+courseunit14+courseunit15;

       gpa=TQP/TCU;
       gpa1=TQP1/TCU1;
       gpa2=TQP2/TCU2;
       gpa3=TQP3/TCU3;
       gpa4=TQP4/TCU4;
       gpa5=TQP5/TCU5;
       gpa6=TQP6/TCU6;
       gpa7=TQP7/TCU7;
       gpa8=TQP8/TCU8;
       gpa9=TQP9/TCU9;
       gpa10=TQP10/TCU10;
       gpa11=TQP11/TCU11;

          if(n_courses <= 5){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP, TCU, gpa);

       }else if(n_courses <= 6){
       printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP1, TCU1, gpa1);

        }else if(n_courses <= 7){
       printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP2, TCU2, gpa2);

        }else if(n_courses <= 8){
         printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP3, TCU3, gpa3);

            }else if(n_courses <= 9){
         printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP4, TCU4, gpa4);

        }else if(n_courses <= 10){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP5, TCU5, gpa5);

        }else if(n_courses <= 11){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP6, TCU6, gpa6);

        }else if(n_courses <= 12){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP7, TCU7, gpa7);

        }else if(n_courses <= 13){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP8, TCU8, gpa8);

        }else if(n_courses <= 14){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP9, TCU9, gpa9);

        }else if(n_courses <= 15){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP10, TCU10, gpa10);

          }else if(n_courses <= 16){
        printf("your first semester gpa is %.2f/%.2f=%.2f\n", TQP11, TCU11, gpa11);
          }

        printf("SECOND SEMESTER:\n");
        printf("Enter the number of courses you did during your second semester:\n");
    scanf("%d", &sn_courses);

    if(sn_courses <= 5){
        printf("Enter your second semester courses: \n " );
        scanf("%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4);

       }else if(sn_courses <= 6){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5);

        }else if(sn_courses <= 7){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6);

        }else if(sn_courses <= 8){
            printf("Enter your second semester courses:\n");
            scanf("%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7);

            }else if(sn_courses <= 9){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8);
        }else if(sn_courses <= 10){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9);

        }else if(sn_courses <= 11){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10);

        }else if(sn_courses <= 12){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11);

        }else if(sn_courses <= 13){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12);

        }else if(sn_courses <= 14){
        printf("Enter your second semester courses:\n");
        scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13);

        }else if(sn_courses <= 15){
    printf("Enter your second semester courses:\n");
    scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13, &coursecode14);

        }else if(sn_courses <= 16){
    printf("Enter your second semester courses:\n");
    scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &coursecode, &coursecode1, &coursecode2, &coursecode3, &coursecode4, &coursecode5, &coursecode6, &coursecode7, &coursecode8, &coursecode9, &coursecode10, &coursecode11, &coursecode12, &coursecode13, &coursecode14, &coursecode15);
        }
        if(sn_courses <= 5){
        printf("Enter the course unit for each course: \n " );
        scanf("%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4);

       }else if(sn_courses <= 6){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5);

        }else if(sn_courses <= 7){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6);

        }else if(sn_courses <= 8){
            printf("Enter the course unit for each course:\n");
            scanf("%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7);

            }else if(sn_courses <= 9){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8);
        }else if(sn_courses <= 10){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9);

        }else if(sn_courses <= 11){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10);

        }else if(sn_courses <= 12){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10, &scourseunit11);

        }else if(sn_courses <= 13){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10, &scourseunit11, &scourseunit12);

        }else if(sn_courses <= 14){
        printf("Enter the course unit for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10, &scourseunit11, &scourseunit12, &scourseunit13);

        }else if(sn_courses <= 15){
    printf("Enter the course unit for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10, &scourseunit11, &scourseunit12, &scourseunit13, &scourseunit14);

        }else if(sn_courses <= 16){
    printf("Enter the course unit for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &scourseunit, &scourseunit1, &scourseunit2, &scourseunit3, &scourseunit4, &scourseunit5, &scourseunit6, &scourseunit7, &scourseunit8, &scourseunit9, &scourseunit10, &scourseunit11, &scourseunit12, &scourseunit13, &scourseunit14, &scourseunit15);
        }

     if(sn_courses <= 5){
        printf("Enter the grade point you got for each course: \n " );
        scanf("%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4);

       }else if(sn_courses <= 6){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5);

        }else if(sn_courses <= 7){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6);

        }else if(sn_courses <= 8){
            printf("Enter the grade point you got for each course:\n");
            scanf("%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7);

            }else if(sn_courses <= 9){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8);
        }else if(sn_courses <= 10){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9);

        }else if(sn_courses <= 11){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10);

        }else if(sn_courses <= 12){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10, &sgradepoint11);

        }else if(sn_courses <= 13){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10, &sgradepoint11, &sgradepoint12);

        }else if(sn_courses <= 14){
        printf("Enter the grade point you got for each course:\n");
        scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10, &sgradepoint11, &sgradepoint12, &sgradepoint13);

        }else if(sn_courses <= 15){
    printf("Enter the grade point you got for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10, &sgradepoint11, &sgradepoint12, &sgradepoint13, &sgradepoint14);

     }else if(sn_courses <= 16){
    printf("Enter the grade point you got for each course:\n");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f", &sgradepoint, &sgradepoint1, &sgradepoint2, &sgradepoint3, &sgradepoint4, &sgradepoint5, &sgradepoint6, &sgradepoint7, &sgradepoint8, &sgradepoint9, &sgradepoint10, &sgradepoint11, &sgradepoint12, &sgradepoint13, &sgradepoint14, &sgradepoint15);
     }

    sqp=scourseunit * sgradepoint;
     sqp1=scourseunit1* sgradepoint1;
     sqp2=scourseunit2* sgradepoint2;
     sqp3=scourseunit3* sgradepoint3;
     sqp4=scourseunit4* sgradepoint4;
     sqp5=scourseunit5* sgradepoint5;
     sqp6=scourseunit6* sgradepoint6;
     sqp7=scourseunit7* sgradepoint7;
     sqp8=scourseunit8* sgradepoint8;
     sqp9=scourseunit9* sgradepoint9;
     sqp10=scourseunit10* sgradepoint10;
     sqp11=scourseunit11* sgradepoint11;
     sqp12=scourseunit12* sgradepoint12;
     sqp13=scourseunit13* sgradepoint13;
     sqp14=scourseunit14* sgradepoint14;
     sqp15=scourseunit15* sgradepoint15;

     STQP=sqp+sqp1+sqp2+sqp3+sqp4;
     STQP1=sqp+sqp1+sqp2+sqp3+sqp4+sqp5;
     STQP2=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6;
     STQP3=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7;
     STQP4=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8;
     STQP5=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9;
     STQP6=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10;
     STQP7=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10+sqp11;
     STQP8=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10+sqp11+sqp12;
     STQP9=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10+sqp11+sqp12+sqp13;
     STQP10=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10+sqp11+sqp12+sqp13+sqp14;
     STQP11=sqp+sqp1+sqp2+sqp3+sqp4+sqp5+sqp6+sqp7+sqp8+sqp9+sqp10+sqp11+sqp12+sqp13+sqp14+sqp15;

     STCU=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4;
     STCU1=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5;
     STCU2=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6;
     STCU3=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7;
     STCU4=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8;
     STCU5=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9;
     STCU6=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10;
     STCU7=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10+scourseunit11;
     STCU8=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10+scourseunit11+scourseunit12;
     STCU9=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10+scourseunit11+scourseunit12+scourseunit13;
    STCU10=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10+scourseunit11+scourseunit12+scourseunit13+scourseunit14;
    STCU11=scourseunit+scourseunit1+scourseunit2+scourseunit3+scourseunit4+scourseunit5+scourseunit6+scourseunit7+scourseunit8+scourseunit9+scourseunit10+scourseunit11+scourseunit12+scourseunit13+scourseunit14+scourseunit15;

       sgpa=STQP/STCU;
       sgpa1=STQP1/STCU1;
       sgpa2=STQP2/STCU2;
       sgpa3=STQP3/STCU3;
       sgpa4=STQP4/STCU4;
       sgpa5=STQP5/STCU5;
       sgpa6=STQP6/STCU6;
       sgpa7=STQP7/STCU7;
       sgpa8=STQP8/STCU8;
       sgpa9=STQP9/STCU9;
       sgpa10=STQP10/STCU10;
       sgpa11=STQP11/STCU11;

        if(sn_courses <= 5){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP, STCU, sgpa);

       }else if(sn_courses <= 6){
       printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP1, STCU1, sgpa1);

        }else if(sn_courses <= 7){
       printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP2, STCU2, sgpa2);

        }else if(sn_courses <= 8){
         printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP3, STCU3, sgpa3);

            }else if(sn_courses <= 9){
         printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP4, STCU4, sgpa4);

        }else if(sn_courses <= 10){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP5, STCU5, sgpa5);

        }else if(sn_courses <= 11){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP6, STCU6, sgpa6);

        }else if(sn_courses <= 12){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP7, STCU7, sgpa7);

        }else if(sn_courses <= 13){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP8, STCU8, sgpa8);

        }else if(sn_courses <= 14){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP9, STCU9, sgpa9);

        }else if(sn_courses <= 15){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP10, STCU10, sgpa10);

          }else if(sn_courses <= 16){
        printf("your second semester gpa is %.2f/%.2f=%.2f\n", STQP11, STCU11, sgpa11);
          }





          CGPA=(gpa+sgpa)/2, CGPA11=(gpa+sgpa1)/2, CGPA12=(gpa+sgpa2)/2, CGPA13=(gpa+sgpa3)/2, CGPA14=(gpa+sgpa4)/2, CGPA15=(gpa+sgpa5)/2, CGPA16=(gpa+sgpa6)/2, CGPA17=(gpa+sgpa7)/2, CGPA18=(gpa+sgpa8)/2, CGPA19=(gpa+sgpa9)/2, CGPA20=(gpa+sgpa10)/2, CGPA142=(gpa+sgpa11)/2;
          CGPA1=(gpa1+sgpa1)/2, CGPA21=(gpa1+sgpa)/2, CGPA22=(gpa1+sgpa2)/2, CGPA23=(gpa1+sgpa3)/2, CGPA24=(gpa1+sgpa4)/2, CGPA25=(gpa1+sgpa5)/2, CGPA26=(gpa1+sgpa6)/2, CGPA27=(gpa1+sgpa7)/2, CGPA28=(gpa1+sgpa8)/2, CGPA29=(gpa1+sgpa9)/2, CGPA30=(gpa1+sgpa10)/2, CGPA141=(gpa1+sgpa11)/2;
          CGPA2=(gpa2+sgpa2)/2, CGPA31=(gpa2+sgpa1)/2, CGPA32=(gpa2+sgpa)/2, CGPA33=(gpa2+sgpa3)/2, CGPA34=(gpa2+sgpa4)/2, CGPA35=(gpa2+sgpa5)/2, CGPA36=(gpa2+sgpa6)/2, CGPA37=(gpa2+sgpa7)/2, CGPA38=(gpa2+sgpa8)/2, CGPA39=(gpa2+sgpa9)/2, CGPA40=(gpa2+sgpa10)/2, CGPA140=(gpa2+sgpa11)/2;
          CGPA3=(gpa3+sgpa3)/2, CGPA41=(gpa3+sgpa1)/2, CGPA42=(gpa3+sgpa2)/2, CGPA43=(gpa3+sgpa)/2, CGPA44=(gpa3+sgpa4)/2, CGPA45=(gpa3+sgpa5)/2, CGPA46=(gpa3+sgpa6)/2, CGPA47=(gpa3+sgpa7)/2, CGPA48=(gpa3+sgpa8)/2, CGPA49=(gpa3+sgpa9)/2, CGPA50=(gpa3+sgpa10)/2, CGPA139=(gpa3+sgpa11)/2;
          CGPA4=(gpa4+sgpa4)/2, CGPA51=(gpa4+sgpa1)/2, CGPA52=(gpa4+sgpa2)/2, CGPA53=(gpa4+sgpa3)/2, CGPA54=(gpa4+sgpa)/2, CGPA55=(gpa4+sgpa5)/2, CGPA56=(gpa4+sgpa6)/2, CGPA57=(gpa4+sgpa7)/2, CGPA58=(gpa4+sgpa8)/2, CGPA59=(gpa4+sgpa9)/2, CGPA60=(gpa4+sgpa10)/2, CGPA138=(gpa4+sgpa11)/2;
          CGPA5=(gpa5+sgpa5)/2, CGPA61=(gpa5+sgpa1)/2, CGPA62=(gpa5+sgpa2)/2, CGPA63=(gpa5+sgpa3)/2, CGPA64=(gpa5+sgpa4)/2, CGPA65=(gpa5+sgpa)/2, CGPA66=(gpa5+sgpa6)/2, CGPA67=(gpa5+sgpa7)/2, CGPA68=(gpa5+sgpa8)/2, CGPA69=(gpa5+sgpa9)/2, CGPA70=(gpa5+sgpa10)/2, CGPA137=(gpa5+sgpa11)/2;
          CGPA6=(gpa6+sgpa6)/2, CGPA71=(gpa6+sgpa1)/2, CGPA72=(gpa6+sgpa2)/2, CGPA73=(gpa6+sgpa3)/2, CGPA74=(gpa6+sgpa4)/2, CGPA75=(gpa6+sgpa5)/2, CGPA76=(gpa6+sgpa)/2, CGPA77=(gpa6+sgpa7)/2, CGPA78=(gpa6+sgpa8)/2, CGPA79=(gpa6+sgpa9)/2, CGPA80=(gpa6+sgpa10)/2, CGPA136=(gpa6+sgpa11)/2;
          CGPA7=(gpa7+sgpa7)/2, CGPA81=(gpa7+sgpa1)/2, CGPA82=(gpa7+sgpa2)/2, CGPA83=(gpa7+sgpa3)/2, CGPA84=(gpa7+sgpa4)/2, CGPA85=(gpa7+sgpa5)/2, CGPA86=(gpa7+sgpa6)/2, CGPA87=(gpa7+sgpa)/2, CGPA88=(gpa7+sgpa8)/2, CGPA89=(gpa7+sgpa9)/2, CGPA90=(gpa7+sgpa10)/2, CGPA135=(gpa7+sgpa11)/2;
          CGPA8=(gpa8+sgpa8)/2, CGPA91=(gpa8+sgpa1)/2, CGPA92=(gpa8+sgpa2)/2, CGPA93=(gpa8+sgpa3)/2, CGPA94=(gpa8+sgpa4)/2, CGPA95=(gpa8+sgpa5)/2, CGPA96=(gpa8+sgpa6)/2, CGPA97=(gpa8+sgpa7)/2, CGPA98=(gpa8+sgpa)/2, CGPA99=(gpa8+sgpa9)/2, CGPA100=(gpa8+sgpa10)/2, CGPA134=(gpa8+sgpa11)/2;
          CGPA9=(gpa9+sgpa9)/2, CGPA101=(gpa9+sgpa1)/2, CGPA102=(gpa9+sgpa2)/2, CGPA103=(gpa9+sgpa3)/2, CGPA104=(gpa9+sgpa4)/2, CGPA105=(gpa9+sgpa5)/2, CGPA106=(gpa9+sgpa6)/2, CGPA107=(gpa9+sgpa7)/2, CGPA108=(gpa9+sgpa8)/2, CGPA109=(gpa9+sgpa)/2, CGPA110=(gpa9+sgpa10)/2, CGPA133=(gpa9+sgpa11)/2;
          CGPA10=(gpa10+sgpa10)/2, CGPA111=(gpa10+sgpa1)/2, CGPA112=(gpa10+sgpa2)/2, CGPA113=(gpa10+sgpa3)/2, CGPA114=(gpa10+sgpa4)/2, CGPA115=(gpa10+sgpa5)/2, CGPA116=(gpa10+sgpa6)/2, CGPA117=(gpa10+sgpa7)/2, CGPA118=(gpa10+sgpa8)/2, CGPA119=(gpa10+sgpa9)/2, CGPA120=(gpa10+sgpa)/2, CGPA132=(gpa10+sgpa11)/2;
          CGPA11=(gpa11+sgpa11)/2, CGPA121=(gpa11+sgpa1)/2, CGPA122=(gpa11+sgpa2)/2, CGPA123=(gpa11+sgpa3)/2, CGPA124=(gpa11+sgpa4)/2, CGPA125=(gpa11+sgpa5)/2, CGPA126=(gpa11+sgpa6)/2, CGPA127=(gpa11+sgpa7)/2, CGPA128=(gpa11+sgpa8)/2, CGPA129=(gpa11+sgpa9)/2, CGPA130=(gpa11+sgpa10)/2, CGPA131=(gpa11+sgpa)/2;

          if((n_courses<=5)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA);

          }else if((n_courses<=5)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA11);

          }else if((n_courses<=5)&&(sn_courses<=7)){
            printf("your CGPA is %.2f", CGPA12);

          }else if((n_courses<=5)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA13);

          }else if((n_courses<=5)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA14);

          }else if((n_courses<=5)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA15);

          }else if((n_courses<=5)&&(sn_courses<=11)){
            printf("your CGPA is %.2f", CGPA16);

          }else if((n_courses<=5)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA17);

          }else if((n_courses<=5)&&(sn_courses<=13)){
            printf("your CGPA is %.2f", CGPA18);

          }else if((n_courses<=5)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA19);

          }else if((n_courses<=5)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA20);

         }else if((n_courses<=5)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA142);


          }else if((n_courses<=6)&&(sn_courses<=5)){
          printf("your CGPA is %.2f", CGPA21);

          }else if((n_courses<=6)&&(sn_courses<=6)){
            printf("your CGPA is %.2f", CGPA1);

          }else if( (n_courses<=6)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA22);

          }else if((n_courses<=6)&&(sn_courses<=8)){
            printf("your CGPA is %.2f", CGPA23);

          }else if((n_courses<=6)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA24);

          }else if((n_courses<=6)&&(sn_courses<=10)){
            printf("your CGPA is %.2f", CGPA25);

          }else if((n_courses<=6)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA26);

          }else if((n_courses<=6)&&(sn_courses<=12)){
            printf("your CGPA is %.2f", CGPA27);

          }else if((n_courses<=6)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA28);

          }else if((n_courses<=6)&&(sn_courses<=14)){
            printf("your CGPA is %.2f", CGPA29);

          }else if((n_courses<=6)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA30);

          }else if((n_courses<=6)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA141);

          }else if((n_courses<=7)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA32);

          }else if((n_courses<=7)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA31);

          }else if((n_courses<=7)&&(sn_courses<=7)){
            printf("your CGPA is %.2f", CGPA2);

          }else if((n_courses<=7)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA33);

          }else if((n_courses<=7)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA34);

          }else if((n_courses<=7)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA35);

          }else if((n_courses<=7)&&(sn_courses<=11)){
            printf("your CGPA is %.2f", CGPA36);

          }else if((n_courses<=7)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA37);

          }else if((n_courses<=7)&&(sn_courses<=13)){
            printf("your CGPA is %.2f", CGPA38);

          }else if((n_courses<=7)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA39);

          }else if((n_courses<=7)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA40);

            }else if((n_courses<=7)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA140);

          }else if((n_courses<=8)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA41);

          }else if((n_courses<=8)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA43);

          }else if((n_courses<=8)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA42);

          }else if((n_courses<=8)&&(sn_courses<=8)){
            printf("your CGPA is %.2f", CGPA3);

          }else if((n_courses<=8)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA44);

          }else if((n_courses<=8)&&(sn_courses<=10)){
            printf("your CGPA is %.2f", CGPA45);

          }else if((n_courses<=8)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA46);

          }else if((n_courses<=8)&&(sn_courses<=12)){
            printf("your CGPA is %.2f", CGPA47);

          }else if((n_courses<=8)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA48);

          }else if((n_courses<=8)&&(sn_courses<=14)){
            printf("your CGPA is %.2f", CGPA49);

          }else if((n_courses<=8)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA50);

          }else if((n_courses<=8)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA139);

          }else if((n_courses<=9)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA54);

          }else if((n_courses<=9)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA51);

          }else if((n_courses<=9)&&(sn_courses<=7)){
            printf("your CGPA is %.2f", CGPA52);

          }else if((n_courses<=9)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA53);

          }else if((n_courses<=9)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA4);

          }else if((n_courses<=9)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA55);

          }else if((n_courses<=9)&&(sn_courses<=11)){
            printf("your CGPA is %.2f", CGPA56);

          }else if((n_courses<=9)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA57);

          }else if((n_courses<=9)&&(sn_courses<=13)){
            printf("your CGPA is %.2f", CGPA58);

          }else if((n_courses<=9)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA59);

          }else if((n_courses<=9)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA60);

            }else if((n_courses<=9)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA138);

          }else if((n_courses<=10)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA61);

          }else if((n_courses<=10)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA65);

          }else if((n_courses<=10)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA62);

          }else if((n_courses<=10)&&(sn_courses<=8)){
            printf("your CGPA is %.2f", CGPA63);

          }else if((n_courses<=10)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA64);

          }else if((n_courses<=10)&&(sn_courses<=10)){
            printf("your CGPA is %.2f", CGPA5);

          }else if((n_courses<=10)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA66);

          }else if((n_courses<=10)&&(sn_courses<=12)){
            printf("your CGPA is %.2f", CGPA67);

          }else if((n_courses<=10)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA68);

          }else if((n_courses<=10)&&(sn_courses<=14)){
            printf("your CGPA is %.2f", CGPA69);

          }else if((n_courses<=10)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA70);

          }else if((n_courses<=10)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA137);

          }else if((n_courses<=11)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA76);

          }else if((n_courses<=11)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA71);

          }else if((n_courses<=11)&&(sn_courses<=7)){
            printf("your CGPA is %.2f", CGPA72);

          }else if((n_courses<=11)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA73);

          }else if((n_courses<=11)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA74);

          }else if((n_courses<=11)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA75);

          }else if((n_courses<=11)&&(sn_courses<=11)){
            printf("your CGPA is %.2f", CGPA6);

          }else if((n_courses<=11)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA77);

          }else if((n_courses<=11)&&(sn_courses<=13)){
            printf("your CGPA is %.2f", CGPA78);

          }else if((n_courses<=11)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA79);

          }else if((n_courses<=11)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA80);

            }else if((n_courses<=11)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA136);

          }else if((n_courses<=12)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA81);

          }else if((n_courses<=12)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA87);

          }else if((n_courses<=12)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA82);

          }else if((n_courses<=12)&&(sn_courses<=8)){
            printf("your CGPA is %.2f", CGPA83);

          }else if((n_courses<=12)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA84);

          }else if((n_courses<=12)&&(sn_courses<=10)){
            printf("your CGPA is %.2f", CGPA85);

          }else if((n_courses<=12)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA86);

          }else if((n_courses<=12)&&(sn_courses<=12)){
            printf("your CGPA is %.2f", CGPA7);

          }else if((n_courses<=12)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA88);

          }else if((n_courses<=12)&&(sn_courses<=14)){
            printf("your CGPA is %.2f", CGPA89);

          }else if((n_courses<=12)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA90);

          }else if((n_courses<=12)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA135);

          }else if((n_courses<=13)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA98);

          }else if((n_courses<=13)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA91);

          }else if((n_courses<=13)&&(sn_courses<=7)){
            printf("your CGPA is %.2f", CGPA92);

          }else if((n_courses<=13)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA93);

          }else if((n_courses<=13)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA94);

          }else if((n_courses<=13)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA95);

          }else if((n_courses<=13)&&(sn_courses<=11)){
            printf("your CGPA is %.2f", CGPA96);

          }else if((n_courses<=13)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA97);

          }else if((n_courses<=13)&&(sn_courses<=13)){
            printf("your CGPA is %.2f", CGPA8);

          }else if((n_courses<=13)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA99);

          }else if((n_courses<=13)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA100);

            }else if((n_courses<=13)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA134);

          }else if((n_courses<=14)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA101);

          }else if((n_courses<=14)&&(sn_courses<=5)){
            printf("your CGPA is %.2f", CGPA109);

          }else if((n_courses<=14)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA102);

          }else if((n_courses<=14)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA103);

          }else if((n_courses<=14)&&(sn_courses<=9)){
            printf("your CGPA is %.2f", CGPA104);

          }else if((n_courses<=14)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA105);

          }else if((n_courses<=14)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA106);

          }else if((n_courses<=14)&&(sn_courses<=12)){
            printf("your CGPA is %.2f", CGPA107);

          }else if((n_courses<=14)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA108);

          }else if((n_courses<=14)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA9);

          }else if((n_courses<=14)&&(sn_courses<=15)){
            printf("your CGPA is %.2f", CGPA110);

            }else if((n_courses<=14)&&(sn_courses<=16)){
            printf("your CGPA is %.2f", CGPA133);

          }else if((n_courses<=15)&&(sn_courses<=5)){
          printf("your CGPA is %.2f", CGPA120);

          }else if((n_courses<=15)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA111);

          }else if((n_courses<=15)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA112);

          }else if((n_courses<=15)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA113);

          }else if((n_courses<=15)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA114);

          }else if((n_courses<=15)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA115);

          }else if((n_courses<=15)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA116);

          }else if((n_courses<=15)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA117);

          }else if((n_courses<=15)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA118);

          }else if((n_courses<=15)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA119);

          }else if((n_courses<=15)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA10);

          }else if((n_courses<=15)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA132);

          }else if((n_courses<=16)&&(sn_courses<=5)){
          printf("your CGPA is %.2f", CGPA131);

          }else if((n_courses<=16)&&(sn_courses<=6)){
          printf("your CGPA is %.2f", CGPA121);

          }else if((n_courses<=16)&&(sn_courses<=7)){
          printf("your CGPA is %.2f", CGPA122);

          }else if((n_courses<=16)&&(sn_courses<=8)){
          printf("your CGPA is %.2f", CGPA123);

          }else if((n_courses<=16)&&(sn_courses<=9)){
          printf("your CGPA is %.2f", CGPA124);

          }else if((n_courses<=16)&&(sn_courses<=10)){
          printf("your CGPA is %.2f", CGPA125);

          }else if((n_courses<=16)&&(sn_courses<=11)){
          printf("your CGPA is %.2f", CGPA126);

          }else if((n_courses<=16)&&(sn_courses<=12)){
          printf("your CGPA is %.2f", CGPA127);

          }else if((n_courses<=16)&&(sn_courses<=13)){
          printf("your CGPA is %.2f", CGPA128);

          }else if((n_courses<=16)&&(sn_courses<=14)){
          printf("your CGPA is %.2f", CGPA129);

          }else if((n_courses<=16)&&(sn_courses<=15)){
          printf("your CGPA is %.2f", CGPA130);

          }else if((n_courses<=16)&&(sn_courses<=16)){
          printf("your CGPA is %.2f", CGPA11);
          }
    return 0;
}
  
