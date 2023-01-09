#include<stdio.h>
int main()
{
    int m1=0,m2=1,m3,num,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)

     {num=m1;   //0 1 1 2
      m3=m1+m2;//m3=2
      m1=m2;   //m1=1
      m2=m3;   //m2=1
      printf("   %d",num);}


}
