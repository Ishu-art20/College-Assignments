// Armstrong Number
#include<stdio.h>
#include<math.h>
int main()
{ 
    int no,count=0,copy;
    int rem,rev=0,arm=0;
    printf("Enter number: ");
    scanf("%d",&no);
    copy= no;
    count=0;
    while(no>0)
    {   count++;
        no=no/10;    
    }
    no=copy;
    while(no>0)
    {
        rem=no%10;
        arm=arm+ceil(pow(rem,count));
        no=no/10;
    }
    if(copy==arm)
    printf("\nIt's an Armstrong Number");
    else
    printf("\nIt's not an Armstrong Number");
    return 0;

}
