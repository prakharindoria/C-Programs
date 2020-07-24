main(){
int x;
x=fib(7);
printf("%d",x);
}

//-1,1,0,1,1,2,3,5,8,13
int fib(int n){
   if(n==1||n==2)
    return 1;
   else
    return (fib(n-1)+fib(n-2));

}

