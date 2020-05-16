#include<stdio.h>
#include<string.h>
main(){
    int l,i,j;
    char s[20];
    char r[20];
printf("Enter a String");
gets(s);
l=strlen(s);
for(i=0;s[i];i++)
{
    if(s[i]==s[i+1])
    {
        for(j=i;s[j];j++)
        {
            s[j]=s[j+1];

        }
        i--;
    }
}
puts(s);


}
