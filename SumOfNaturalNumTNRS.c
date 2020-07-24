main(){
    int sum;
    sum=calc();
    printf("%d",sum);
}
int calc();
int calc()
{
    int n,i,sum=0;
    printf("Enter a Num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    return sum;
}

