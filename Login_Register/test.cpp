////
//// Created by apple34 on 2019-06-25.
////
//
//#include <curses.h>
//#include <stdio.h>
//#include <cstdlib>
//
//#define StartX 1
//#define StartY 1
//void initial();
//
//int test()
//{
//    int x = StartX;
//    int y = StartY;
//    int ch;
//    initial();
//    box(stdscr,'|','-');
//    attron(A_REVERSE);
//    mvaddstr(0,20,"curses program");
//    attroff(A_REVERSE);
//    move(x,y);
//    do{
//        ch = getch();
//        switch(ch)
//        {
//            case KEY_UP:
//            --y;
//             break;
//            case KEY_DOWN:
//            ++y;
//            break;
//            case KEY_RIGHT:
//             ++x;
//             break;
//            case KEY_LEFT:
//             --x;
//             break;
//            case ' ':
//             ++y;
//             x=0;
//             break;
//             case '/t':
//             x+=7;
//             break;
//             case KEY_BACKSPACE:
//            mvaddch(y,--x,' ');
//             break;
//             case 27:
//             endwin();
//            exit(1);
//             default:
//             addch(ch);
//             x++;
//
//             break;
//            }
//        move(y,x);
//        }while(1);
//}
//
//void initial()
//{
//    initscr();
//    cbreak();
//    nonl();
//    noecho();
//    intrflush(stdscr,false);
//    keypad(stdscr,true);
//    refresh();
//}
