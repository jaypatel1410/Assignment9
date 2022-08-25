#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()  
{
    double a,b,c,D,D2,R1 ,R1_1 ,R2 ,R2_1 ,R2_2 ,R2_3 ,R3,n;
    printf("Enter the constants a,b and c of quadratic equation in \na*x*x + b*x + c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("\nThe Equation is : %.2lfx*x + %.2lfx + %.2lf",a,b,c);
    D=b*b-4*a*c;
    switch(D>0)
    {
        case 1:
            R1=(-b + sqrt(D))/2*a;
            R1_1=(-b - sqrt(D))/2*a;
            printf("\nThe roots of the equation are x=%.2lf and x=%.2lf",R1,R1_1);
            exit(0);
    }
    switch(D==0)
    {
        case 1:
            R3=-b/2*a;
            printf("\nThe roots of the equation are x=%.2lf",R3);
            exit(0);
    }
    switch(D<0)
    {
        case 1:
            D2=4*a*c-b*b;
            R2=-(b/2*a);
            R2_1=-(b/2*a);
            R2_2=sqrt(D2)/2*a;
            R2_3=sqrt(D2)/2*a;
            printf("\nThe roots of the equation are x=%.2lf+(%.2lf)i and x=%.2lf-(%.2lf)i",R2,R2_2,R2_1,R2_3);
            exit(0);
    }
    getch();
    return 0;
}