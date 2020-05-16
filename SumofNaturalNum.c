main(){
int sum=0,i,num,x;
printf("Enter a Num:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    sum=sum+i;

}
printf("%d\n",sum);
x=(num*(num+1))/2;
printf("%d",x);
}
