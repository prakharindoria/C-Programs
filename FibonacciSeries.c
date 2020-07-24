main(){
    int x,i,a=-1,b=1,c;
printf("Enter No. of Terms");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d,",c);

}
}
