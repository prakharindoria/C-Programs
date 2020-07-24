main()
{
    int a,b,c;
    printf("Enter Three Nums:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest num is %d",((a>b) ? ((a>c)?a:c) : ((b>c)?b:c)) );
}
