main(){
    int i,j,sum,k;
int A[3][3];
int B[3][3];
int C[3][3];
printf("Enter Into Matrice First:\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    scanf("%d",&A[i][j]);
   }

}

printf("Enter Into Matrice Second:\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    scanf("%d",&B[i][j]);
   }

}

for(i=0;i<3;i++)
{

   for(j=0;j<3;j++){
    //arr3[i][j]=(arr1[i][0]*arr2[0][j])+(arr1[i][1]*arr2[1][j])+(arr1[i][2]*arr2[2][j]);
        sum=0;
    for(k=0;k<3;k++){
        sum=sum+A[i][k]*B[k][j];
        C[i][j]=sum;

    }

   }
}
printf("Sum is :\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    printf("%d ",C[i][j]);

   }
   printf("\n");
}








}

