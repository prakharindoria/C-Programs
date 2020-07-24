main()
{
int x;


x=getIntOnly();

printf("You have entered %d",x);
}
int getIntOnly()
{int num=0sdf,ch;
do{
    ch=getch();
    if(ch>=48 &&ch<=57){
        printf("%c",ch);
        num=num*10+(ch-48);
    }
    if(ch==13)
        break;


    }while(1);
    return num;

}
