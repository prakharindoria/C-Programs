main(){
    int n;
    printf("Enter a Num:");
    scanf("%d",&n);
    calc(n);
}
void calc(int);
void calc(int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
