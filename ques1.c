//Enter month number to get number of days using switch case
//have used concept of menu driven too for ease
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a;
    while(1)
    {
        printf("\nEnter month for which you want to print the number of days\n");
        printf("For Exit enter 13\n\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                printf("January has 31 days\n");
                break;
            case 2:
                printf("February has 28 or 29 days\n");
                break;
            case 3:
                printf("March has 31 days\n");
                break;        
            case 4:
                printf("April has 30 days\n");
                break;
            case 5:
                printf("May has 31 days\n");
                break;
            case 6:
                printf("June has 30 days\n");
                break;
            case 7:
                printf("July has 31 days\n");
                break;
            case 8:
                printf("August has 31 days\n");
                break;
            case 9:
                printf("September has 30 days\n");
                break;
            case 10:
                printf("October has 31 days\n");
                break;
            case 11:
                printf("November has 30 days\n");
                break;
            case 12:
                printf("December has 31 days\n");
                break;
            case 13:
                exit(0);
            default:
                printf("Enter valid month\n");
                break;
        }
    }
    getch();
    return 0;
}