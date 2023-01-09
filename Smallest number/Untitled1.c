#include<stdio.h>
main()
{
    float a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);

    if ((a<b)&&(a<c))
    printf("Smallest is %.2f",a);

    else if((b<a)&&(b<c))
    printf("Smallest is %.",b);

    else
    printf("Smallest is %.2f",c);
    getch();
}
