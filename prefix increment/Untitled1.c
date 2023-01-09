#include<stdio.h>
main()
{
    int n,i,j;
    printf("enter the number:");
    scanf("%d",&n);
    i=n;
    j=i++;
    printf("i=%d \nj=%d",i,j);
    getch();
}
