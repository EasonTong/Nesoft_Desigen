#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <curses.h>

#include "Login_Register/Login_Register.h"
#include "Util/util.h"
#include "user/user.h"

void sort(char **a)
{
    char *temp;
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            if(strlen(a[j]) > strlen(a[j+1]))
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {

    User u[2] = {{"qwer", "passwd1"},{"qwe2", "passwd2"}};
//    User *u1 = Read_users_from_file();
    Write_users_into_file(u, sizeof(u)/ sizeof(User));
//    printf("%d", sizeof(u)/ sizeof(User));
//    Write_users_into_file(u, s);
//    char *menu_context[10] = {"功能一", "功能2", "功能3"};
//
//
//    int a = select(menu_context, "test", 3);
//    printf("%d", a);
    return 0;
}


/*
求素数
int i;

cout << 2 << endl;
for(i=2; i<=100; i++)
{

    for (int j=2; i%j!=0; j++)
    {
        if (j > sqrt(i))
        {
            cout << i  << endl;
            break;
        }
    }
}


int i;
    vector<int> a;
    a.push_back(2);
    cout << 2 << endl;
    for(i=2; i<=1000; i++)
    {
        for (int j=0; i % a[j]!=0; j++)
        {
            if (a[j] * a[j] > i)
            {
                cout << i << endl;
                a.push_back(i);
                break;
            }
        }
    }

 //字符串统计
 string s;
    cin >> s;

    int Upper = 0;
    int Lower = 0;
    int Digit = 0;
    int Other = 0;

    for(char i : s)
    {
        if (i>=65 && i<=90 )
        {
            Upper++;
        }
        else if (i>=97 && i<=122 )
        {
            Lower++;
        }
        else if (i>=48 && i<=57 )
        {
            Digit++;
        }
        else{
            Other++;
        }
    }

    cout << "Upper:" << Upper << endl;
    cout << "Lower:" << Lower << endl;
    cout << "Digit:" << Digit << endl;
    cout << "Other:" << Other << endl;


 //字符串长度输出

*/

//字符串长度输出
/*

 char strs[5][100];
    char *a[5];
    char *temp;

    for(int i=0; i<5; i++)
    {
        scanf("%s", strs[i]);
        a[i] = strs[i];
//        printf("字符串长度：%d \n", (int)strlen(a[i]));
    }

    for (int i=0; i<5; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }

    for(auto & i : a)
    {
        printf("%s\n",i);
    }
 */