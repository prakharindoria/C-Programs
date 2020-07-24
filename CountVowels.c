main()
{   char s[25];
    int a=0,e=0,i=0,o=0,u=0,j,sum=0;
    printf("Enter Something to check:\n\n");
    gets(s);
    for(j=0;j<strlen(s);j++)
    {
        switch(s[j])
        {
            case 'a':case 'A': a++;break;
            case 'e':case 'E': e++;break;
            case 'i':case 'I': i++;break;
            case 'o':case 'O': o++;break;
            case 'u':case 'U': u++;break;
        }

    }
    sum=a+e+i+o+u;
    printf("\nTotal Vowels:%d \n",sum);
    printf("\na:%d,e:%d,i:%d,o:%d,u:%d",a,e,i,o,u);
    getch();


}

