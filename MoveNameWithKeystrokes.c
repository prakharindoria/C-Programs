#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
};
void gotoxy(int,int);

main()
{   int x=10,y=10;
int x1=60,y1=10;
    char ch;
    gotoxy(x,y);
    printf("~~~~~~~~~~~~^.^");
    gotoxy(x1,y1);
    printf("*");


    while(1)
    {
        ch=_getch();
        switch(ch){
    case 75:x--;break;
    case 72:y--;break;
    case 80:y++;break;
    case 77:x++;break;

    case 27:
        exit(0);


        }
        system("cls");
        gotoxy(x,y);
        printf("~~~~~~~~~~~~^.^");
        gotoxy(x1,y1);
        printf("*");
        if(x>=(x1-15))
        {
        gotoxy(x,y);
        printf("~~~~~~~~~~~~~~~~~~~~~*^.^");
        gotoxy(x1,y1);
        printf(" ");}
        }



}

