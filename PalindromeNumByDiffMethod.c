main(){
int n,i,temp,lstDigit,revnum=0;
printf("Enter a number");
scanf("%d",&n);
temp=n;
while(temp>0){
        lstDigit=temp%10;
    revnum=revnum*10+lstDigit;
    temp=temp/10;

}
if(revnum==n)
    printf("Num is Palindrome");
else
    printf("Num is not Palindrome");


}

