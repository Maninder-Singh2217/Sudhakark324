#include<stdio.h>

main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
        printf("1");
    else
        printf("0");

//question 4
    int k,a[25];
    scanf("%d",&k);
    for(int i=0;a[i-1]!=-1;i++)
    {
        scanf("%d",&a[i]);
    }
}
