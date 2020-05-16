main(){
    int i,size,temp;
int arr[]={4,5,7,6,9,1,2,3,9,5};
size=sizeof(arr)/sizeof(arr[0]);

for(i=0;i<size;i++)
{temp=arr[i];
if(temp>arr[i+1])
arr[i+1]=temp;
arr[i]=arr[i+1];
}
printf("%d",arr[size-1]);
}
