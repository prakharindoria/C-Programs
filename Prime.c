#include <stdbool.h>
main(){
   int n,i;
   bool isPrime=true;

printf("Enter a num:");
scanf("%d",&n);

for(i=2;i*i<=n;i++){//This Root(n) or i*i is decresing the time coplexity by wxponential factor.
    if(n%i==0){
        isPrime=false;
       break;
       }
}

if(isPrime==1)
    printf("Num is prime");
else
    printf("Num is composite");

}
