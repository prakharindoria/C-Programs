#include<string.h>
#include<stdio.h>
main(){
    int l,i,j,k=0;
    char s[50];
    char r[50];
printf("Enter a String");
gets(s);
l=strlen(s);
for(i=l-1;i>=0;i--){
        k++;
    if(s[i]==32)
       {for(j=0;j<k;j++){
        r[j]=s[i+j+1];}
        k++;

        }


}

puts(r);

}


