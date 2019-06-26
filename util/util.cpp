//
// Created by apple34 on 2019-06-25.
//

#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include "util.h"
#include "../user/user.h"

//模拟windows下的conio.h
char conio(char *s)
{
    char c;

    printf("%s\n", s);

    system("stty -icanon");
    system("stty -echo");
    c=getchar();

    system("stty icanon");
    system("stty echo");
//    printf("You have inputed:%c \n",c);

    return c;
}

//所有选项的内容
//颜色教程：https://www.douban.com/note/624412584/
int select(char *context[10], char* title, int argc)
{
    //printf("%s\n", title);

    system("clear");
//    printf("\e[45;1m %s \e[33m\n", title);
//    printf("\e[47;1m   \e[30m\n");
    int flag = 0;//选中项
    char command;

    for (;;) {
        //打印标题
        printf("\e[45;1m %s \e[33m\n", title);
        printf("\e[47;1m   \e[30m\n");

        for (int i = 0; i < argc; i++) {

            //打印选中项
            if (i == flag){
                printf("\e[45;1m %s \e[33m", context[i]);
                printf("\e[47;1m   \e[30m\n");
            } else{
                printf("\e[47;1m %s \e[30m\n", context[i]);
            }
        }

        command = conio("///////////////////////\n");
        //38⬆️40⬇️
        if (command == 'w'){
            flag = (flag + argc - 1) % argc;

        }
        else if (command == 's'){
            flag = (flag + argc + 1) % argc;


        } else if(command == 27){
            break;

        } else if(command == 'c'){
            break;
        }
        system("clear");
    }
    // printf("\e[46;1m Hello, world! \e[43m\n");

    return flag;
}

void Write_users_into_file(User* u, int n){
    FILE* fp = nullptr;
    fp = fopen("./users.bin","wb");

    fwrite(u, sizeof(User), n, fp);

    fclose(fp);
}

User* Read_users_from_file(){
    /*
     * 1.功能按二进制形式将stream指向的文件的size*nmemb的数据读到ptr数据区去
     * 2.参数　　ptr：viod指针类型，读到数据存放的首地址　　
     * size：数据块的大小，字节数　　
     * nmemb：一次读多少数据块　　
     * stream：要读取数据文件的FILE指针
     * 3.返回值　　正常：实际读取数据块个数　　
     * 异常：0(具体通过feof()和ferror()判定)*/
    //size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

    FILE* fp = nullptr;
    fp = fopen("./users.bin","rb");
    User *u = (User*)malloc(sizeof(User)*MAXLEN);
    User *temp = (User*)malloc(sizeof(User));


    for(int i=0;
    fread(temp, sizeof(User), 1, fp) != 0;
    i++)
    {
        u[i]=*temp;
    }

    return u;

}

