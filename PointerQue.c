#include<stdio.h>
main(){
int a[]={1,2},*p;
*p=&a;
printf("%d",p[1]);
}
