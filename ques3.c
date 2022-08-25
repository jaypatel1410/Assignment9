#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a;
    while(1)
    {
        printf("\nEnter any day number of the week\n");
        printf("For Exit enter 8\n\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                printf("After the hectic week, Sunday is for relaxation, spending time with loved ones, and mostly about taking the day out to have a good day! Happy Sunday!\n");
                break;
            case 2:
                printf("Hope your week gets off to an amazing start! Happy Monday!\n");
                break;
            case 3:
                printf("Tuesday is a special day in many senses. May it gives you all the opportunity you have been looking for. Happy Tuesday!\n");
                break;        
            case 4:
                printf("Never postpone the happy moments meant for Wednesday to other days, because happiness is not about tomorrow. Happiness is about today. Happy Wednesday to you, have a beautiful day.\n");
                break;
            case 5:
                printf("May your day be blessed with joy and happiness as the sun shines its rays. Wishing you warm happy Thursday wishes!\n");
                break;
            case 6:
                printf("It is the day like a cool breeze in life. Enjoy the Friday! Fridays best day to spend time with the people you love. Wishing you a day full of cheers and happiness with your family!\n");
                break;
            case 7:
                printf("The weekend is a blessing in our lives. May Saturday bring much love, fun, and blessings into your life! I wish you a happy Saturday!\n");
                break;
            case 8:
                exit(0);
            default:
                printf("Enter valid day number in a week\n");
                break;
        }
    }
    getch();
    return 0;
}