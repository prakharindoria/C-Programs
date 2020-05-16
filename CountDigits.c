main(){
int n,count=0;
printf("Enter a num:");
scanf("%d",&n);
while(n!=0){
    n=n/10;
    count++;
    printf("\n %d \n",n);
}
printf("Total Digits are %d",count);
}
