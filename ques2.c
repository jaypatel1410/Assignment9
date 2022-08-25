#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//for exit(0) function which will exit the entire code
int main()              
{
    int a,b,n;
    while(1)
    { 
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter Numbers for addition\n");
                scanf("%d%d",&a,&b);
                printf("Addition is %d",a+b);
                break;
            case 2:
                printf("Enter Numbers for Subtraction\n");
                scanf("%d%d",&a,&b);
                printf("Subtraction is %d",a-b);
                break;
            case 3:
                printf("Enter Numbers for Multiplication\n");
                scanf("%d%d",&a,&b);
                printf("Multiplication is %d",a*b);
                break;
            case 4:
                printf("Enter Numbers for Division\n");
                scanf("%d%d",&a,&b);
                printf("Division is %d",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("Enter valid entry\n\n");
                break;
        }
    }
    getch();
    return 0;
}