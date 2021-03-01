#include<stdio.h>
int ave(int a[],int s);
int max(int v[],int z);
int max(int h[],int n);
int i;
int main(void)
{
    int d,b[100],m,k,l;
    printf("How many number of days:");
    scanf("%d",&d);
    printf("Take the temperature:");
    for(i=0;i<d;i++)
    {
      scanf("%d",&b[i]);
    }
    m=ave(b,d);
    printf("Average is %d\n",m);
    k=max(b,d);
    printf("%d is max\n",k);
    l=min(b,d);
    printf("%d is min",l);

}
int ave(int a[],int s)
{
    int c=0,l;
    for(i=0;i<s;i++)
    {
        c=c+a[i];
    }
    l=c/s;
    return (c/s);

}
int max(int v[],int z)
{
    int max=0;
    for(i=0;i<z;i++)
    {
        if(max<v[i])
            max=v[i];
    }
    return(max);
}
int min(int h[],int n)
{
    int min=500;
    for(i=0;i<n;i++)
    {
        if(min>h[i])
            min=h[i];
    }
    return(min);
}
