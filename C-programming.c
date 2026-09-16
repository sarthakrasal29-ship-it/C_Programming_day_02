#include <stdio.h>

void main() {
     
    char name[20];
     char college[500];

    printf("Enter your name:- ");
    scanf("%s", name);

    printf("enter your college name:- ");
    scanf("%s\n", college);

     printf("Welcome, %s\n", name);
     printf("You are studying at %s", college);

    getchar();
}   

