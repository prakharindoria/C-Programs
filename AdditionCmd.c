main(int argc,char *argv[])
{
    int sum,a,b,c;
    a=strToInt(argv[1]);
    b=strToInt(argv[2]);
    c=a+b;
    printf("%d",c);
}

int strToInt(char *str)
{   int i,x;
    for(i=0,x=0;str[i];i++){

         if(str[i]=='-')
            i++;

    if(str[i]>='0' && str[i]<='9')
        x=x*10+(str[i]-48);
    else
        break;

}
if(str[0]=='-')
    x=-x;
return x;
}
