#include<string.h>
#include<stdio.h>
main(){
    int b=0;
    char s[20];
    int l,i;

printf("Enter a String");
gets(s);
l=strlen(s);
for(i=0;i<l;i++){
    if(s[i]==s[l-i-1])
       b=1;
    else
        break;

}
if(b==1)
    printf("Palindrome");
else
     printf("Not Palindrome");

}
