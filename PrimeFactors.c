main(){
    int n,i,j;
printf("Enter a Number:");
scanf("%d",&n);
//Factors:
/*for(i=1;i<=n;i++)
{
    if(n%i==0){
             for(j=2;j<i;j++)
                 {if(i%j==0)
                  break;}
             if(j==i)
             printf("%d ",j);
        }

}

}*/
for(i=2;n>1;i++){
while(n%i==0){
    printf("%d ",i);
    n=n/i;
}
}}
