main(){
int a,b,h,q;
printf("Enter two num:");
scanf("%d%d",&a,&b);
//LCM
//3=3,6,9,12,15,18
//4=4,8,12,16,20,24
q=a>b?a:b;

for(h=q;h<=(a*b);h=h+q)
{
    if(h%a==0 && h%b==0)
       break;
}
printf("Lcm is %d",h);


}
