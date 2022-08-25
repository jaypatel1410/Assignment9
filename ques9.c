#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()  
{
    int a,n;
    while(1)
    {
        printf("Enter a number\n");
        scanf("%d",&n);
        if(n%2==0)
        a=1;
        else
        a=2;
        switch(a)
        {
            case 1:
                printf("The upper nearest odd of entered even is %d",n+1);
                exit(0);
            case 2:
                printf("Enter only even numbers\n");
                break;
        }
    }
    getch();
    return 0;
}