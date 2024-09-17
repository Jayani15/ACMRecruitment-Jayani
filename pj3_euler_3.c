//Program to print largest prime factor of the number 600851475143
# include <stdio.h>
# include <math.h>
int main()
{
    long long i,n,big=-1;

    n=600851475143;

    while(n%2==0)
    {
       big = 2;
       n /= 2;
    }

    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
           big = i;
           n /= i;
        }
    }

    if(n>2)
       big = n;

    printf("%lld",big);
    return 0;
}