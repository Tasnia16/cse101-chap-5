#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char n[][20]={"one","two","three","four","five","six","seven","eight","nine"};
    char a[8];
    int x;
    printf("Enter a number:");
    gets(a);
    //a=getche();
    printf("\n");
    x=atoi(a);
    //a=a-'0';
   // if(a>=0 && a<10)
        printf("%s",n[x-1]);


}

