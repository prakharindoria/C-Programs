main(int argc,char *argv[])
{   int temp,fact=1;
    int n=strToInt(argv[1]);
    if(n>=0){
    while(n>0){
     fact=fact*n;
        n--;
    }
    printf("%d",fact);
    }
    else
        printf("Please Enter Positive Integer.");
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
