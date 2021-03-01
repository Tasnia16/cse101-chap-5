#include<stdio.h>
int main(void)
{
    char n[][2][20]={"1","one",
    "2","two",
    "3","three",
    "4","four",
    "5","five",
    "6","six",
    "7","seven",
    "8","eight",
    "9","nine",
    "10","ten",
    "",""};
    int i;
    char a[100];
    gets(a);
    for(i=0;n[i][0];i++)
    {
        if(!strcmp(a,n[i][0]))
           {
            printf("%s",n[i][1]);
            break;
           }
    }

}
