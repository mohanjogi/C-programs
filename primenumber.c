#include <stdio.h>
void main()
{
    int n,i;
    printf("enter n value");
    scanf("%d",&n);
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
}
