#include<math.h>
#include<stdio.h>
int numberOfDigits(int);
main(){
int number,i,numOfDigits,checker=0,numbercpy;
int arr[10];
printf("Palindrome Number Check? \n\n");
printf("Enter a Number: ");
scanf("%d",&number);
numbercpy=number;
numOfDigits=numberOfDigits(number);
for(i=0;i<numOfDigits;i++){
        arr[i]=number%10;
        number=number/10;

}
for(i=0;i<numOfDigits;i++){
        if(arr[i]==arr[numOfDigits-1])
        {
            checker=1;
            numOfDigits--;
        }
        break;

}
if(checker==1)
    printf("%d Is a Palindrome Number",numbercpy);
else
    printf("%d Is Not a Palindrome Number",numbercpy);

    getch();
}

int numberOfDigits(int num)
{
    int negOfNum=-num;
    int dig;
    if(num>0)
        return (int)log10(num)+1;
    else if(num==0)
        return 1;
    else
        return (int)log10(negOfNum)+1;
}
