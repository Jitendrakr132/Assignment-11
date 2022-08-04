#include<stdio.h>
int LCM(int,int );
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    printf("LCM %d",LCM(a,b));
    return 0;
}
int LCM(int a,int b)
{
    int i, max;
    max=a>b?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
        {
       return max;
       break;
     }
   max++;
   }
}
