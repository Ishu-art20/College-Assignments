// Insert an element
#include <stdio.h>
int main() {
    int arr[6]={30,40,50,60,70};
    int n=5,i,pos,no;
    printf("Original array:\n");
    for(i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the number to insert: ");
    scanf("%d",&no);
    printf("Enter the position to insert (1 to %d): ",n+1);
    scanf("%d", &pos);
    // convert to 0-based index
    int index = pos - 1;
    // shift elements right
    for(i=n;i>index;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[index]=no;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }  return 0;
}

           

