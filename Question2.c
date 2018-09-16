#include<stdio.h>

main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m%n==0)
            printf("%d",m/n);
    else
            printf("0");

return 0;
}
