main(){
int sum=0,n;
printf("Enter a num ");
scanf("%d",&n);
if(n%2==0)
    n=n-1;


while(n>=1){
    sum=sum+n;
    n=n-2;}

printf("Sum is %d",sum);
}
