#include<stdio.h>
int main(void)
{
    int mod=0,i,j,d,count=1;
    int a[20];
    printf("Enter the numbers:");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
       for(j=i+1;j<20;j++)
       {
           if(a[i]==a[j])
            count++;
       }
       if(count>mod)
       {mod=count;
       d=a[i];
       }count=1;
    }
    printf("%d is mode\n",a[i]);
    printf("Occurance is %d",mod);
}
