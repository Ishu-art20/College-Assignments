#include <stdio.h>
int main() {
    int arr[6]={30,40,50,60,70};
    int n=5,i,pos;
    printf("Original array:\n");
    for(i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position to delete (1 to %d): ",n);
    scanf("%d",&pos);
    // Convert to 0-based index
    int index = pos - 1;
    // Shift elements left
    for(i=index;i<n-1;i++) 
    {
        arr[i]=arr[i+1];
    }
    n--; // reduce size after deletion
    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
           