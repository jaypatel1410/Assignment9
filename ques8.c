#include<stdio.h>
#include<conio.h>
int main()  
{
    int a,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>=1)
    a=1;
    if(n<=-1)
    a=1;
    switch(a)
    {
        case 1:
            printf("Converting the positive number to negative\n");
            printf("The Negative number is %d",n-2*n);
            break;
    }
    getch();
    return 0;
}