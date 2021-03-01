#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char n[][20]={"one","two","three","four","five","six","seven","eight","nine"};
    char a;
    printf("Enter a number:");
    a=getche();
    printf("\n");
    a=a-'0';
   // if(a>=0 && a<10)
        printf("%s",n[a-1]);


}

