//Program needs improvement as it does  not account for the logic of %400 ,example 1700,1900,2100 are not leap years.
main(){
int a;
printf("Enter a Year:");
scanf("%d",&a);
if(a%4==0)
    printf("LEAP YEAR");
}
