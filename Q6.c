#include<stdio.h>

int main() {
    int Marks;
    char Grade;

    printf("Enter Your marks: ");
    scanf("%d", &Marks);

    if (Marks >= 90&&Marks <=100) Grade = 'A';
    else if (Marks >= 80&&Marks < 90) Grade = 'B';
    else if (Marks >= 70&&Marks < 80) Grade = 'C';
    else if (Marks >= 60&&Marks < 70) Grade = 'D';
    else if (Marks<60) Grade = 'F';

    switch (Grade) {
        case 'A':
            printf("Grade A\n");
            break;
        case 'B':
            printf("Grade B\n");
            break;
        case 'C':
            printf("Grade C\n");
            break;
        case 'D':
            printf("Grade D\n");
            break;
        case 'F':
            printf("Grade F\n");
            break;
        default:
        	printf("Invalid grade!\n");
            break;
    }

    return 0;
}
