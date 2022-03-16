
#include <stdio.h>
#include <string.h>
void main()
{
    int rollno, phy, che, math, total;
    float percentage;
    char name[20], div[10];

    printf("Input the Roll Number of the student :");
    scanf("%d", &rollno );

    printf("Input the Name of the Student :");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Mathematics: ");
    scanf("%d%d%d", &phy, &che, &math);

    total = phy + che + math;
    percentage = total/3.0;

    if (percentage >= 60)
    strcpy(div, "First");

    else
    if (percentage < 60 && percentage >= 48)
        strcpy(div,"Second");

    else
        if (percentage <48 && percentage >= 36)
        strcpy(div, "Pass");

         else
        strcpy(div, "Fail");
       printf("\nRoll No : %d\nName of Student : %s\n", rollno, name);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks  in Mathematics : %d\n", phy, che, math);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, percentage, div);
    return 0;
}
