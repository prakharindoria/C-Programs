#include <stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL){
       printf("File cannot open: ");
       exit(1);

    }

    printf("Enter your content: ");
    gets(s);
    for(i=0;i<=strlen(s);i++)
    {
        fputc(s[i],fp);


    }
fclose(fp);
}
