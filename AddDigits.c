main(){
int n,sum=0,r;
printf("Enter a num:");
scanf("%d",&n);
while(n!=0){
    r=n%10;
    sum=sum+r;
    n=n/10;

}
printf("Sum is %d",sum);
}

