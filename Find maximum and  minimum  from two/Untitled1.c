#include<stdio.h>
main()
{
    int a,b;
    printf("Enter the number=");
    scanf("%d%d",&a,&b);

    if(a>b)
    printf("maximum number is %d minimum number is %d",a,b);


    else
        printf("The maximum number is %d minimum number is %d",b,a);
    getch();
}
