#include<stdio.h>
int Prime(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(prime(n)%2)
        printf("prime number");
    else
        printf("NOt prime number");
    return 0;
}
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        flag=1;
            break;
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
