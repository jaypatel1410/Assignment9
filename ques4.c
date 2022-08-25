#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//for exit(0) function which will exit the entire code
int main()              
{
    int a,b,c,n;
    while(1)
    { 
        printf("\n1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
        printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
        printf("\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter lenghts of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || c==a)
                {
                    if(a==b && b==c)
                        printf("The traingle is not an Isosceles traingle\n");
                    else
                        printf("The traingle is an Isosceles traingle\n");
                }
                else 
                    printf("The traingle is not an Isosceles traingle\n");
                break;
            case 2:
                printf("Enter lenghts of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b)
                    printf("The traingle is Right angled traingle\n");
                else 
                    printf("The traingle is not an Equilateral traingle\n");
                break;
            case 3:
                printf("Enter lenghts of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c)
                    printf("The traingle is an Equilateral traingle\n");
                else 
                    printf("The traingle is not an Equilateral traingle\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Enter valid entry\n\n");
                break;
        }
    }
    getch();
    return 0;
}