main(){
int i,j,k;
for(i=1;i<=5;i++)
    {  k=1;
       for(j=1;j<=9;j++)
            {
                if(j>=6-i&& j<=4+i&& k)
                   {

                   printf("*");
                    k=0;}
                else{
                    printf(" ");
                    k=1;}


            }
    printf("\n");
    }
}

