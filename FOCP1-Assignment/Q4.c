// Swapping by four methods
#include<stdio.h>
void swap(int*, int*);
int main()
{   
    int a,b,c,temp,copy1,copy2;
    printf("Enter no1 & no2 = ");
    scanf("%d%d",&a,&b);
    copy1=a; copy2=b;
    printf("Before swapping: no1 = %d, no2 = %d",a,b);
    // BITWISE METHOD
    a = a^b;
    b = a^b;
    a= a^b;
    printf("\n BY BITWISE XOR");
    printf("\nAfter swapping: no1 = %d, no2 = %d",a,b);
    // TEMPORARY VARIABLE
    a=copy1; b=copy2; // a & b values remain same for next method 
    c =temp;
    c=b;
    b=a;
    a=c;
    printf("\n BY TEMPORARY VARIABLE");
    printf("\nAfter swapping: no1 = %d, no2 = %d",a,b);
     // ARITHMETIC WAY
    a=copy1; b=copy2;
    a = a+b;
    b = a-b;
    a= a-b;
    printf("\n BY ARITHMETIC WAY");
    printf("\nAfter swapping: no1 = %d, no2 = %d",a,b);
    // POINTER MANIPULATION
    a=copy1; b=copy2;
      swap (&a, &b);
    printf("\n BY POINTERS MANIPULATION");
    printf("\nAfter swapping: no1 = %d, no2 = %d",a,b);
}
void swap(int *x, int *y)  
 { 
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
  }