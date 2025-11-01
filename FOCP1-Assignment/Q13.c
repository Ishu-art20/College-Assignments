// peak element in array
#include<stdio.h>
int main()
{
    int i, arr[]={6,4,7,8,9,11,2,7};
    int n;
    n = sizeof(arr)/sizeof(arr[0]); 
    for(i=0;i<n;i++)
    {  
       if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
          printf("%d is the Peak Element\n",arr[i]);
    }
}