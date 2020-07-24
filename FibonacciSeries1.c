main(){
   int x;
   x=fibo(7
          );
   printf("%d",x);
}

 int fibo(int n){
   int a=-1,b=1,c=0,i;
	for(i=0;i<n;i++){
		  c=a+b;
		   a=b;
		   b=c;

	}
	return c;}
