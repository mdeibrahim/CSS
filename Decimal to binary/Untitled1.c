#include<stdio.h>
main()
{
    int num,rem,no,binary=0,i=1;
    printf("Enter a decimal number=");
    scanf("%d",&no);


    while(no!=0)
    {
        rem=no%2;
        no=no/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("Equivalent number is %d",binary);
    getch();
}







