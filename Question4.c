#include<stdio.h>

int find_even(int);
main()
{
    int k;

    scanf("%d",&k);

    printf("%d",find_even(k));

return 0;
}

int find_even(int k)
{
    int a[25];
    for(int i=0;a[i-1]!=-1;i++)
    {
        scanf("%d",&a[i]);
    }
     //o/p krni hai kth even eg if k=3 so 3rd even in the seq
    int even,m=0;

        for(int n=0;a[n-1]!=-1;n++)
        {
            if(a[n]%2==0)m++;
           if(m==k)
           {
               even=a[n];
               break;
           }

        }


    return even;

}
