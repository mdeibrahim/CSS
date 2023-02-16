#include<stdio.h>
int main()
{
   char upper,ascii,lower;
    int ch;
    printf("1.upper to lower\n2.lower to upper\n");
    //scanf("%d",&ch);
    ch=getchar ();
    if (ch=='1')
    {
       printf("Enter an UpperChar : ");
        scanf("\n%c",&upper);

        lower=upper+32;
        printf("\nlowerChar is %c\nThank you\n",lower);
    }

    if (ch=='2')
    {
       printf("Enter a LowerChar : ");
        scanf("\n%c",&lower);

        upper=lower-32;
        printf("\nUpperChar is %c\nThank you\n",upper);
    }
}
