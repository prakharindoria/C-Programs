main(){
    int b,i=0,s=0;
printf("Enter a Binary Num:");
scanf("%d",&b);
while(b>0){
    s=s+pow(2,i)*(b%10);
    b=b/10;
    i++;


}
printf("%d",s);
}
