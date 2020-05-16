main(){
int l,u,x,i;
printf("Enter Two Num:");
scanf("%d%d",&l,&u);
for(x=(l<u?l:u)+1;x<=(l>u?l:u)-1;x++){
for(i=2;i<x;i++)
        if(x%i==0)
        break;
if(i==x)
printf("%d ",x);

}




}
