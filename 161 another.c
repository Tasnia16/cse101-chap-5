#include<stdio.h>
int main(void)
{
    char t[][80]={"hi","tasnia","mango","go","under","ki","lpl","cool",""};
    int i=0;
    while(strcmp(t[i],""))
    {
        printf("%s\n",t[i]);
        i++;
    }
}

