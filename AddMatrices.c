main(){
    int i,j,sum;
int arr1[3][3];
int arr2[3][3];
int arr3[3][3];
printf("Enter Into Matrice 1");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    scanf("%d",&arr1[i][j]);
   }

}

printf("Enter Into Matrice 2");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    scanf("%d",&arr2[i][j]);
   }

}

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    arr3[i][j]=arr1[i][j]+arr2[i][j];

   }
}
printf("Sum is :\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++){
    printf("%d ",arr3[i][j]);

   }
   printf("\n");
}








}
