// prime numbers in array
#include<stdio.h>
int main()
{
    int i, arr[]={23,11,17,25,47,90,24};
    int n,k,flag,count=0;
    n = sizeof(arr)/sizeof(arr[0]); 
    for(i=0;i<n;i++)
    {   flag=0;
      for(k=2;k<=arr[i]/2;k++)
        if(arr[i]%k==0)
         { 
           flag=1;
           break;
         }  
    
        if(flag==0 && arr[i]>1)
       {
        count++;
       }
    }
        printf("no of prime numbers: %d",count);
    return 0;
}