main(){
int x,y,temp;
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
printf("x=%d y=%d \n",x,y);
temp=x;
x=y;
y=temp;
printf("x=%d y=%d ",x,y);
}
