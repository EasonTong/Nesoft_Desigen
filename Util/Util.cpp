//
// Created by apple34 on 2019-06-25.
//

#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include "Util.h"


char conio(char *s)
{
    char c;

    printf("%s\n", s);

    system("stty -icanon");

    c=getchar();

    system("stty icanon");

//    printf("You have inputed:%c \n",c);

    return c;
}

//所有选项的内容
char select(char **context, char* title)
{
    printf("%s\n", title);

    for(int i=0; i<strlen(reinterpret_cast<const char *>(context)); i++)
    {
        printf("%s\n", context[i]);
    }

    return 'a';
}