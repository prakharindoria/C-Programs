main(){
    int i,size,temp;
int arr[]={4,7,6,19,14,2,3,9,5,78};

size=sizeof(arr)/sizeof(arr[0]);

for(i=size-1;i>=0;i--){
    temp=arr[i];
if(temp<arr[i-1]){
arr[i-1]=temp;
arr[i]=arr[i-1];
}
}
printf("%d",arr[0]);
}

