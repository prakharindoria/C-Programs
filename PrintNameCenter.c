#include <windows.h>    //  header file for

COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
main(){

gotoxy(100,100);
printf("Prakhar Indoria");

}
