#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char command[100],temp[20];
    int i,j;
    for(;;)
    {
        printf("Operation:\n");
        gets(command);
        if(!strcmp(command,"quit"))
            break;
        printf("Enter 1st number:");
        gets(temp);
        i=atoi(temp);
        printf("Enter 2nd number:");
        gets(temp);
        j=atoi(temp);
        if(!strcmp(command,"add"))
            printf("%d\n",i+j);
        else if(!strcmp(command,"subtract"))
            printf("%d\n",i-j);
        else if(!strcmp(command,"multiply"))
            printf("%d\n",i*j);
         else if(!strcmp(command,"divide"))
            {
                if(j)
                printf("%d\n",i/j);
            }
            else
                printf("Wrong command! Try again\n");


    }
}
