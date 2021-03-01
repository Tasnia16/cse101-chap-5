#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char n[][20]={"one","two","three","four","five","six","seven","eight","nine"};
    char a[8];
    int x;
    printf("Enter a number:");
    gets(a);
    x=atoi(a);
        printf("%s",n[x-1]);


}

