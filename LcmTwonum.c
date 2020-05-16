main(){
int a,b,i,q;
printf("Enter two num:");
scanf("%d%d",&a,&b);
//LCM
//3=3,6,9,12,15,18
//4=4,8,12,16,20,24
q=a>b?a:b;

for(i=q;i<=(a*b);i=i+q)
{
    if(i%a==0 && i%b==0)
       break;
}
printf("Lcm is %d",i);


}

