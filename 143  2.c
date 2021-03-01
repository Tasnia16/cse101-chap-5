#include<stdio.h>
int main(void)
{
    char a[80];
    int i;
    printf("Enter a message:");
    for(i=0;i<80;i++)
    {
        scanf("%c",a[i]);
        if(a[i]=='\r')
            break;
    }
     //printf("\n");
    for(i=0;a[i]!='\r';i++)
    {
        printf("%c",a[i]+1);
    }
}
