#include<stdio.h>
int fact(int );
int combi(int ,int);
void print_pascal(int );
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
    f=f*n;
    n--;
   }
return (f);
}
int combi(int n,int r)
{
    return (fact(n)/fact(n-r)/fact(r));
}
void print_pascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i &&k)
            {
            printf("%2d",combi(i-1,r));
            k=0; r++;
        }
        else
        {
            printf("  ");
            k=1;
        }
    }
    printf("\n");
    }
}
int main()
{
    print_pascal(6);
}
