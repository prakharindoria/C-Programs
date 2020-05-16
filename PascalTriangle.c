main(){
    printPascal(13);
    getchar();
    }

int fact(int n){
int f=1;
while(n>=1)
{
    f=f*n;
    n--;
}
return (f);
}

int combi(int x,int y){
    return (fact(x)/fact(x-y)/fact(y));
}

void printPascal(int line){

int i,j,k,r;
for(i=1;i<=line;i++)
{   k=1;
    r=0;
    for(j=1;j<=2*line-1;j++)
    {
        if(j>=line+1-i && j<=line-1+i &&k){
            printf("%3d",combi(i-1,r));
            k=0;
            r++;}
        else{
            printf("   ");
            k=1;}

    }
    printf("\n");
}


}
