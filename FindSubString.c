int SubStringMatch(char [],char []);

main(){
    int z;
z=SubStringMatch("aababbababba","abba");
printf("%d",z);

}

int SubStringMatch(char str[],char s[])
{
    int i,j,k,l;
    l=strlen(s);
    for(i=0;i<str[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++){
            if(str[k]!=s[j])
                break;
            k++;

        }
        if(j==l)
        return (i);


    }
    return (-1);
}
