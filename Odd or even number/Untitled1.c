#include<stdio.h>
main()
{
    int n;
    printf("Enter the number=");
    scanf("%d",&n);

    if(n%2==0)
    printf("This ia an even number");

    else
        printf("This is an odd number");
    getch();
}
