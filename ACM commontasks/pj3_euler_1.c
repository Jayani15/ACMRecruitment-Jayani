//program to find the sum of all the multiples of 3 or 5 below 1000
# include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=3;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
         sum += i;
    }
    printf("The Sum is : %d",sum);
    return 0;
}