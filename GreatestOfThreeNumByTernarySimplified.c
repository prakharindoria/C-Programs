main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest Number is %d",(a>b) ? ((a>c)?a:c) : ((b>c)?b:c) );
}
