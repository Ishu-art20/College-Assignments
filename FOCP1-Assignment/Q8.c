// Fibonacci series
#include<stdio.h>
int main()
{
    int n,i,n1,n2,next;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    n1=0;  n2=1;
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
        printf(" ");
    }
    return 0;
}