#include<string.h>
#include<stdio.h>
main(){
    int c=0;
    char s[100];
    int l,i;
printf("Enter a String");
gets(s);
l=strlen(s);
for(i=0;i<l;i++){
    if(s[i]==32)
       c++;


}

printf("%d",(c+1));

}

