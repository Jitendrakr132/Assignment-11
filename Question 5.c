#include<stdio.h>
void Prime(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i,x=2;
    while(n)
    {
    for(i=2;i<x;i++)
        if(x%i==0)
        break;
   if(i==x)
   {
    printf("%d ",x);
    n--;
    }
x++;
    }
    }



