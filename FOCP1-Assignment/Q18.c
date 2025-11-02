// Duplicate element in array
#include<stdio.h>
int main()
{
    int arr[]={1,7,3,2,7,1,2,3,2};
    int n,i,f=0,freq[100]={0};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    printf("Duplicat element are: ");
    for(i=0;i<100;i++)
    {
        if(freq[i]>1)
        {    printf("%d ",i);
             f=1;   }
    }
    if(!f)
      printf("-1 (No Duplicates)");
    return 0;

}
