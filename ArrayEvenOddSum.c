main(){
    int i,sumo=0,sume=0;
    int arr[5];
    printf("Enter 5 nums:");
for(i=0;i<=4;i++){
    scanf("%d",&arr[i]);

}
for(i=0;i<5;i++){
    if(arr[i]%2==0)
        sume=sume+arr[i];
    else
       sumo=sumo+arr[i];

}
printf("Sum Even  is %d \n",sume);
printf("Sum Odd is %d\n",sumo);


}
