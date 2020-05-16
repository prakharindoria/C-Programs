main(){
    int n,sum;
    printf("Enter a Num:");
    scanf("%d",&n);
    sum=calc(n);
    printf("%d",sum);

}
int  calc(int);
int  calc(int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++){
        sum=sum+i*i;
    }
    return sum;

}
