#include<stdio.h>
int array(int a[6][6],int s,int z);
int i,j;
int main(void)
{
  int b[4][5];
  array(b,4,5);
  for(i=0;i<4;i++)
  {
      for(j=0;j<5;j++)
      {
          printf("%d\t",b[i][j]);
      }
  }
}
int array(int a[6][6],int s,int z)
{
    {        for(j=0;j<z;j++)
        {
            a[i][j]=i*j;
        }
    }
    return(a[i][j]);
}
