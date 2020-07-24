main()
{   int a,b,c;
    printf("Enter Three Numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nGreatest Number is %d \n",a>b ? a>c?a:c : b>c?b:c);
}

