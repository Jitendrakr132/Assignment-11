#include<stdio.h>
void Sqaure(int );
int main()
{
    int n;
    Sqaure(n);
    return 0;
}
void Sqaure(int n)
{
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d ",n*n);
}
