main(){
int n,f=1;
printf("Enter Num:");
scanf("%d",&n);
while(n>=1){
    f=f*n;
    n--;
}
printf("Product is %d",f);

}
