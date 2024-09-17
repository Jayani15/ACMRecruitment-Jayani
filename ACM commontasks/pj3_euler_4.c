//program to largest palindrome made from the product of two 3-digit numbers
# include <stdio.h>
int main()
{
   int i,j,pal,temp,rev,rem,larpal=1;
   i=j=pal=temp=rev=rem=0;

   for(i=100;i<1000;i++)
   {
       for(j=100;j<1000;j++)
       {
           pal = i*j;
           temp = pal;
           rev=0;
           while(pal!=0)
           {
               rem = pal%10;
               rev = (rev*10) + rem;
               pal = pal/10;
           }
           if(rev==temp)
           {
               if(temp>=larpal)
                larpal = temp;
           }
       }
   }
   printf("The largest palindrome made from the product of two 3-digit numbers is %d\n\n",larpal);
   return 0;
}
