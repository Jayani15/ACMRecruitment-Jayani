/*//program to print the smallest positive number that is evenly divided by all the numbers from 1 to 20
# include <stdio.h>
main()
{
    int i,j,small=1,res;
    int div = 1;
    for(i=1;;i++)
    {
        for(j=2;j<=20;j++)
        {
            if(i%j!=0)
            {
                div=0;
            }
        }
    }
}*/
# include <stdio.h>
int gcd(int a,int b){
    while(b!=0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int lcm(int a,int b)
{
    return(a*b)/gcd(a,b);
}
int main()
{
    int result=1;

    for(int i=0;i<=10;i++)
    {
        result=lcm(result,i);
    }
    printf("%d\n",result);
    return 0;
}
