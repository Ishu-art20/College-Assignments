// Cyclic array
#include <stdio.h>
int main(void) {
    int arr[] = {1,2,3,4,5}; 
    int last,i,n;      
    n = sizeof(arr)/sizeof(arr[0]);
    if (n>1) 
    {
        last=arr[n-1];            
        for (i=n-1;i>0;--i)       
            arr[i]=arr[i-1];
            arr[0]=last;                   
    }
    printf("rotated array: ");
    for (i=0;i<n;++i) 
        printf("%d ",arr[i]);
        printf("\n");

}
