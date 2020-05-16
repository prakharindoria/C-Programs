main(){
int a,b,h,q;
printf("Enter two num:");
scanf("%d%d",&a,&b);
//HCF
//4 1 2 4
//6 1 2 3 6
q=a<b?a:b;
for(h=q;h>=1;h--)
{
    if(a%h==0 && b%h==0)
        break;
}
if(h==1)
printf(" Numbers are coprime.");
else
printf(" Numbers are NOT coprime.");

}


