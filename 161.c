#include<stdio.h>
int main(void)
{
    char t[][80]={"hi","tasnia","mango","go","under","ki","lpl","cool",""};
    int i,j;
    for(i=0;t[i][0];i++)
    {
        for(j=0;t[i][j];j++)
            printf("%c",t[i][j]);
        printf(" ");
    }
}


