#include<stdio.h>
#include<string.h>
char a[][2][20]={"dog","hund",
"no","nein",
"year","jehr",
"child","kind",
"i","ich",
"drive","fahren",
"house","hous",
"",""};
int main(void)
{
    char eng[20];
    int i;
    printf("print english word:");
    gets(eng);
    for(i=0;a[i][0];i++)
    {
        if(!strcmp(eng,a[i][0]))
        {
            printf("%s is the germany",a[i][1]);
        }
        if(!strcmp(a[i][0],""))
           {
               printf("not in dic");
               break;
           }
    }


}

