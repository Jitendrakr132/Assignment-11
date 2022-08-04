#include<stdio.h>
void fobN(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d ",&n);
    fobN(n);
    return 0;
}
void fobN(int n)
{
   int i,a=-1,b=1,c=0;
    for(i=a,b=1;i<=n;i++)
    {
         c=a+b;
         a=b;
         b=c;
    }
    printf("%d ",c);
}
