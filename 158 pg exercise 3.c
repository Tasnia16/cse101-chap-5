#include<stdio.h>
int main(void)
{
    int a[10][3];
    int i;
    for(i=0;i<10;i++)
    {
        a[i][0]=i+1;
        a[i][1]=(i+1)*(i+1);
        a[i][2]=(i+1)*(i+1)*(i+1);
        printf("%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2]);
    }
}
