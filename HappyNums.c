int isHappy(int n){

    int x=1,y=1,z;
    while(n>1){
        z=0;
    while(n>=1){
        x=n%10;
        y=x*x;
        z=z+y;
        n=n/10;
        }
        n=z;
}
if(z==1)
    return 1;
else
    return 0;


}
main(){
int b;
b=isHappy(19);
printf("%d",b);
}


