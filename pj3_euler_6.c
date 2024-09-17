# include <stdio.h>
int main()
{
    int i;
    int squares=0,squared=0,sum=0,res=0;

    for(i=1;i<=100;i++)
        squares += i*i;

    for(i=1;i<=100;i++)
        sum += i;
    squared = sum*sum;

    if(squared>squares)
        res = squared - squares;
    else
        res = squares - squared;

    printf("Result is : %d",res);
    return 0;
}
