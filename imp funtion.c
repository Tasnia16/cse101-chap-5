#include<stdio.h>
int ave(int a[],int s);
int i;
int main(void)
{
    int d,b[100],m;
    printf("How many number of days:");
    scanf("%d",&d);
    printf("Take the temperature:");
    for(i=0;i<d;i++)
    {
      scanf("%d",&b[i]);
    }
    m= ave(b,d);
    printf("Average is %d",m);
}
int ave(int a[],int s)
{
    int c=0;
    for(i=0;i<s;i++)
    {
        c=c+a[i];
    }
    return(c/s);

}

