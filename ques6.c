#include<stdio.h>
#include<conio.h>
int main()  
{
    int a,n;
    printf("Enter Year\n");
    scanf("%d",&n);
    if(n%100==0)
    a=1;
    else
    a=2;
    switch(a)
    {
        case 1:
            if(n%400==0)
                printf("Leap Year\n");
            else
                printf("Not a Leap Year\n");
            break;
        case 2:
            if(n%4==0)
                printf("Leap Year\n");
            else
                printf("Not a Leap Year\n");
            break;
    }
    getch();
    return 0;
}