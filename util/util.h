//
// Created by apple34 on 2019-06-25.
//

#ifndef NESOFT_DESIGEN_UTIL_H
#define NESOFT_DESIGEN_UTIL_H

#include "../user/user.h"
#define MAXLEN 100
char conio(char *s); //实现conio.h中的getch()功能
int select(char *context[10], char* title, int argc);
void Write_users_into_file(User* u, int n);
User* Read_users_from_file();

#endif //NESOFT_DESIGEN_UTIL_H
