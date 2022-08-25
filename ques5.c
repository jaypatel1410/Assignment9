#include<stdio.h>
#include<conio.h>
int main()  
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Good\n");
            break;
        case 2:
            printf("Better\n");
            break;
        case 3:
            printf("Best\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }
    getch();
    return 0;
}