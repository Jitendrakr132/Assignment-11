#include<stdio.h>
int Prime(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Next number %d",prime(n));
    return 0;
}
int prime(int a)
{
    int i,n,flag=0;
    for(n=a;1;n++)
    {
       flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
    {
        return n;
    break;
    }

}
}

