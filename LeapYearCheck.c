main(){
int year;
printf("Enter Year to check: ");
scanf("%d",&year);
    
if(a%100==0){ //Check if the year is century year or not.  Like => 1900,2000,2100,2200
    if(a%400==0) //Check if it is multiple of 400 like 2000,1600,1200  =>These are leap years.
        printf("Leap Year");
    else   
        printf("Not a Leap Year"); //If the year is Divisible by 100 but not by 400, It is not a leap year.

}
else  //If a year is not century year
{
    if(a%4==0)  //Check if year is divisible by 4
       printf("Leap Year");
    else   
        printf("Not a Leap Year");  //Not divisible by 4.
}
}

