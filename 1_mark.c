

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter ypour marks (0-100)");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
      printf("A\n");

    else if  (marks >= 80)
      printf("B\n");

    else if (marks >=70)
         printf("C\n");

    else if (marks >=60)
         printf("D\n");

    else if (marks >=0)
         printf("F\n");

     else
        printf("Invalid marks\n");

    return 0;



}