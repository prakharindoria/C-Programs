main(){
    char s[5][10];
    int i,b,r;
    char temp[10];
printf("Enter 5 Strings:");
for(i=0;i<5;i++)
{
gets(s[i]);
}
//Dictionary order main hai toh -1 return krta hai.
for(r=1;r<=4;r++){
for(i=0;i<=4-r;i++)
{
    b=strcmp(s[i],s[i+1]);
            if(b>0)
            {strcpy(temp,s[i]);
             strcpy(s[i],s[i+1]);
             strcpy(s[i+1],temp);
             }
}}

for(i=0;i<5;i++)
{
puts(s[i]);
}


}
