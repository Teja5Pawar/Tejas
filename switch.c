#include<stdio.h>
#include <stdlib.h>
int main()
{
    int choice,a,b,s;
    while (1)
    {
        //printf("\n\nFOR Menu Please Enter");
        //getchar();
        system("cls");
        printf("\n1.ADDITION");
        printf("\n2.SUBTRACTION");
        printf("\n3.DIVISION");
        printf("\n4.MULTIPLICATION");
        printf("\n5.ODD-EVEN");
        printf("\n6.ENTER N NUMBERS");
        printf("\n7.EXIT");
        printf("\nEnter Your Choice");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("ENTER TWO NUMBERS");
                scanf("%d %d",&a,&b);
                s = a + b;
                printf("Addition of two numbes is %d",s);
                break;
            case 2:
                printf("ENTER TWO NUMBERS");
                scanf("%d %d",&a,&b);
                s = a - b;
                printf("Subtraction of two numbes is %d",s);
                break;
            case 3:
                printf ("ENTER TWO NUMBERS");
                scanf("%d %d",&a,&b);
                s = a / b;
                printf("Division of two numbes is %d",s);
                break;
            case 4:
                printf("ENTER TWO NUMBERS");
                scanf("%d %d",&a,&b);
                s = a * b;
                printf("Multiplication of two numbes is %d",s);
                break;
            case 5:
                printf("ENTER A NUMBER");
                scanf("%d",&a);
                s = a % 2;
                if (s==0)
                    printf("Even Number");
                else
                {
                    printf("Odd Number");
                }
                break;
            case 6:
                printf("ENTER a NUMBER");
                scanf("%d",&a);
                for (b = 1; b <= a; b++)
                {
                    printf(" %d",b);
                }
                break;
            case 7:
                exit(0);
                break;
            
            default:
                printf("Invalid Choice");
        }
        getchar();
        getchar();
    }
}