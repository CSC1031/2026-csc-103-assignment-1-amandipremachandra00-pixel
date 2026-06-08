#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,average,total;
    char grade;
    char *result;
    printf("Enter your mathematics marks");
    scanf("%f",&m1);
    printf("Enter your scince marks");
    scanf("%f",&m2);
    printf("Enter your English marks");
    scanf("%f",&m3);
    total=m1+m2+m3;
    average=total/3;
    if(average>80&&average<100){
            grade='A';}
    else if(average>70&&average<80)
    {
        grade='B';
    }
    else if (average<80 &&average>60){
        grade='C';
    }
    else if(average<60&&average>50){
        grade='S';
    }

    else{grade='F';}

    if(m1>=40&&m2>=40&&m3>=40){
            result="pass";
    }
    else{
        result="fail";
    }

    printf("Total=%f\nAverage=%f\nGrade=%c\nResult=%s", total, average, grade, result);

    return 0;
}


