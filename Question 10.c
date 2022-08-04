#include<stdio.h>
int fact(int );
void sumofseries();
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n++;
    }
    return f;
}
void sumofseries()
{
    int n,t,sum=0;
    for(n=1;n<=5;n++)
        t=fact(n)/n;
        sum+=t;
    printf("Sum of series %d",sum);
}
int main()
{
  sumofseries();
}
