#include<stdio.h>
int subtract(int a,int b); //Function Header
int main()
{
    int a,b;
    printf("Enter no1 & no2 : ");
    scanf("%d %d",&a,&b);
    printf("Answer = %d",subtract(a,b));
}
int subtract(int a,int b)
{
    while(b!=0)  // condition of loop
    {
        int bor=(~a)&b;  // finds the borrow bits
        a=a^b;   //performs subtraction without borrow
        b=bor<<1;  // shifts the borrow to next bit
    } return a;
}