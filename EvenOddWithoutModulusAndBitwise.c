//Program in C To check number is even or odd without modulus and bitwise.
main()
{
    int num,temp;
printf("Enter a number:");
scanf("%d",&num);
temp=(num/2)*2;
if(temp==num)
    printf("Number  is even");
else
    printf("Number is odd");
}

