main(){
    int r;
int isHappy(int n){
    int x=1,y=1,z,i;
    for(i=1;i<=25;i++){
    while(n>1){
        z=0;
    while(n>=1){
        x=n%10;
        y=x*x;
        z=z+y;
        n=n/10;
        }
        n=z;
      printf("%d ",n);
      break;
}}
if(z==1)
    return 1;
else
    return 0;

}
r=isHappy(202);
printf("%d",r);
}
