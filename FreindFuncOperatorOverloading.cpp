#include<conio.h>


class Complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        printf("a=%d b=%d",a,b);
    }
};
main()
{
    clrsccr();
}
