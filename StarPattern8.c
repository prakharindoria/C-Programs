
main(){
int i,j,k;
for(i=1;i<=4;i++)
    {   k=1;
       for(j=1;j<=9;j++)
            {
                if(j<=i+3 && j>=5-i)
                {


                    printf("%d",k);
                    j<4?k++:k--;

                }

                else{
                    printf(" ");



                }



            }
    printf("\n");
    }
}

