#include<stdio.h>
int main(void)
{
    int comma=0,dot=0,space=0,i;
    char s[100];
    gets(s);
    for(i=0;s[i];i++)
    {
        switch(s[i])
        {
            case ',':comma++;
            break;
            case '.':dot++;
            break;
            case ' ':space++;
            break;
        }
    }
    printf("%d is comma\n",comma);
    printf("%d is dot\n",dot);
    printf("%d is spaces\n",space);
}
