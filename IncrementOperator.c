/*Increment Operator*/
#include<windows.h>
void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}


main()
{
int x=6,a,b;
gotoxy(40,13);
printf("Initial value of x is: %d  \n",x);
x++;
gotoxy(40,14);
printf("After Increment: %dn \n",x);

a=12.7/4.0;
printf("%d \n",a);

b=23|57;
printf("%d",b);



getch();
}
