#include<stdio.h>
void strcpy(char *s,char *t)
{
    while(*s++=*t++);
}
main(){
char *a,*b;
char arr[] = "Prakhar";
char brr[sizeof(a)];
a=arr;
b=brr;
strcpy(b,a);
puts(b);

}
