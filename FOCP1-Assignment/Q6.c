// conversion in array
#include<stdio.h>
#include<math.h>
int binaryToDecimal(long b);
long decimalToBinary(int d);
int main()
{
    int d,b,choice;
    printf("Choose your Conversion type:");
    printf("\n1. Decimal to binary");
    printf("\n2. Binary to Decimal");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice) 
    {  case 1: printf("Enter a decimal number: ");
               scanf("%d",&d);
               printf("\nBrinary : %ld",decimalToBinary(d));
        break;
       case 2: printf("Enter a binary number: ");
               scanf("%ld",&b);
               printf("\nDecimal : %ld",binaryToDecimal(b));
        break; 
       default: printf("Invalid choice");
    }              
}
long decimalToBinary(int d)
{
    long b=0;
    int r,i=1;
    while(d!=0)
    {
        r=d%2;
        d/=2;
        b+=r*i;
        i*=10;
    }   return b;
}
int binaryToDecimal(long b)
{
    long d=0;
    int r,i=0;
    while(b!=0)
    {
        r=b%10;
        b/=10;
        d+=r*pow(2,i);
        ++i;
    }   return d;

}
