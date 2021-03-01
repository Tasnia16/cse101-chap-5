#include<stdio.h>
int sq(int a[],int s);
int i;
int main(void)
{
    int b[10];
    sq(b,10);
    for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
}
int sq(int a[],int s)
{
    for(i=1;i<=s;i++)
    {
        a[i-1]=i*i;
    }
}
