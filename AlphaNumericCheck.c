main()
{   char s[25];
    int a=0,b=0,i;
    printf("Enter Something to check:");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
            a=1;
        if(s[i]>=48 && s[i]<=57)
            b=1;

    }
    if(a==1 && b==1)
        printf("AlphaNumeric");
    else
        printf("Not a AlphaNumeric");

}
