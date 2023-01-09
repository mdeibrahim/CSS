#include<stdio.h>
#include<conio.h>
main()
{
    float a,b,c,sum,average;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f", &a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    printf("Average =%f",average);
    getch();

}
