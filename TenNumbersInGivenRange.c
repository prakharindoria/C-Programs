main(){
int a,b,i,j,n,temp;
int A[10];
printf("Enter Lower Limit of range:");
scanf("%d",&a);
printf("Enter Upper Limit of range:");
scanf("%d",&b);
srand();




        for(i=0;i<10;i++){
                temp=(rand()%10)+a;
                for(j=0;j<=i-1;j++){
                  if(temp==A[j])
                       break;
                }
                if(i==j)
                    A[i]=temp;
                else
                    i--;


}
for(i=0;i<10;i++){
   printf("%d ",A[i]);

}

}
