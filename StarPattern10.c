main(){
int i,j,n,o;
printf("Enter a Number:");
scanf("%d",&n);
o=n/2+1;

for(i=1;i<=o;i++)
    {
       for(j=1;j<=n;j++)
            {
                if(j>=o+1-i&& j<=o-1+i)
                   {

                   printf("*");
                    }
                else{
                    printf(" ");
                    }


            }
    printf("\n");
    }

for(i=o;i<=n;i++)
    {
       for(j=1;j<=n;j++)
            {
                if(j>=(i-o)-1&& j<=(3*o-1)-i)
                   {

                   printf("*");
                    }
                else{
                    printf(" ");
                    }


            }
    printf("\n");
    }
}


