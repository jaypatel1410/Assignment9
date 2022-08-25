#include<stdio.h>
#include<conio.h>
int main()  
{
    double a,amount=0,total=0;
    printf("Enter the electricity units to calculate its charges\n");
    scanf("%lf",&a);
    switch(a<=50)
    {
        case 1:
            amount=a*0.5;
            break;
        case 0:
            switch(a<=150)
            {
                case 1:
                    amount=25+(a-50)*0.75;
                    break;
                case 0:
                    switch(a<=250)
                    {
                        case 1:
                            amount=100+(a-150)*1.2;
                            break;
                        case 0:
                            switch(a>250)
                            {
                                case 1:
                                    amount=220+(a-250)*1.5;
                                    break;
                            }break;
                    }break;
            }break;
    }
    total=amount+(amount*0.2);
    printf("The total amount of electricity bill is = %.2lf",total);
    getch();
    return 0;
}