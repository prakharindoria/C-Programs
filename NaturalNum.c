main()
{
    int i,n;
    printf("Enter a num:");
    scanf("%d",&n);
    if(n%2==0)
        i=n-1;
    else
        i=n;
    while(i>=1)
    {
        printf("%d \n",i);
        i-=2;
    }
}
