// HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b, HCF=0;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
       if(a%i==0 && b%i==0)
       {
         HCF= i;
            if(HCF<i)
            {    HCF=i;   }
       }
    }
    printf("HCF of the numbers is %d ",HCF);
    return 0;
}