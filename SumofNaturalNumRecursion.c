main(){
int res;
res=sum(5);
printf("%d",res);
}

int sum(int n){
    if(n==0)
        return 0;
    return pow(n,3)+sum(n-1);
}
