# include <stdio.h>
main()
{
    int i,j,sum=2;
    long long n=2000000;
    char isprime='y';

    for(i=3;i<n;i++)
    {
        isprime='y';
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isprime='n';
                break;
            }
        }
        if(isprime=='y')
                sum = sum + i;
    }

    printf("%d",sum);
}
