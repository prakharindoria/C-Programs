#include <stdio.h>
#include<math.h>
main(){
int res,n;
printf("Enter a Number");
scanf("%d",&n);
/*while(temp>0){
    ld=temp%10;
    sum=sum+ld;
   temp=temp/10;
*/
res=(int)sumOfDigit(n);
printf("%d",res);
}




int sumOfDigit(int n){
    if(n==0)
        return 0;


    return (pow((n%10),3)+sumOfDigit(n/10));



}
