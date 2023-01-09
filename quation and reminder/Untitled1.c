#include<stdio.h>
main()
{
    int quo,rem;
    int x,y;
    printf("enter the value of x,y:");
    scanf("%d%d",&x,&y);
    quo=x/y;
    rem=x%y;
    printf("Quotient is=%d",quo);
    printf("\nReminder is=%d",rem);
    getch();
}
