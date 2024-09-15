//Program by considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms
# include <stdio.h>
int main()
{
    int n=4000000;
    int i,c=0,sume=0;
    int arr[500];

    arr[0]=0;
    arr[1]=1;

    printf("Fibonacci Series up to %d : ",n);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n%d %d",arr[0],arr[1]);

    for(i=2;;i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
        if(arr[i]>n)
            break;
        printf(" %d ",arr[i]);
        c++;
    }

    for(i=0;;i++)
    {
        if(arr[i]>=n)
            break;
       if(arr[i]%2==0)
       {
           sume += arr[i];
       }
    }
    printf("\n\nThe Sum of all Even numbers in the fibonacci series upto %d is %d\n\n",n,sume);
    return 0;
}
