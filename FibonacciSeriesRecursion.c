main(){
int x;
x=fib(7);
printf("%d",x);
}

//-1,1,0,1,1,2,3,5,8,13
int fib(int n){
   if(n==0||n==1)
    return n;
   else
    return (fib(n-1)+fib(n-2));

}

