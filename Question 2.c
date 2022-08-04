#include<stdio.h>
int HCF(int ,int);
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    printf("HCF %d",HCF(a,b));
    return 0;
}
int HCF(int a,int b)
{
    int min;
    min=a<b?a:b;
    while(1)
    {
        if(a%min==0&&b%min==0)
            return min;
        break;
    }
    min++;
}
