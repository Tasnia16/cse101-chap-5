#include<stdio.h>
int main(void)
{
    char a[100],bigstr[100];
    for(;;)
    {
        gets(a);
        if(!strcmp(a,"quit"))
            break;
        strcat(a,"\n");
        gets(bigstr);
        if((strlen(a)+strlen(bigstr))>200)
            break;
        strcat(bigstr,a);printf(bigstr);
    }
    //printf(bigstr);
}
