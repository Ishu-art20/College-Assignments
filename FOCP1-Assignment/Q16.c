#include <stdio.h>

int main() {
    int arr[7] = {10,20,30,40,50}; 
    int n=5;                          
    int no,choice,i,index;
    printf("Original array:\n");
    for(i=0;i<n;i++) 
    {  printf("%d ",arr[i]);
    }
    printf("\nEnter the number to insert: ");
      scanf("%d",&no);
    printf("Where do you want to insert it?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
      scanf("%d",&choice);
    switch(choice) {
        case 1:
            // FRONT
            index=0;
            for(i=n;i>index;i--) 
            {
                arr[i]=arr[i-1];
            }
            arr[index]=no;
            n++;
            break;
        case 2:
            // MIDDLE
            index=n/2;
            for(i=n;i>index;i--) {
                arr[i]=arr[i-1];
            }
            arr[index]=no;
            n++;
            break;
        case 3:  // END
            arr[n]=no;
            n++;
            break;
        default:
            printf("\nInvalid choice!");
            return 0;
    }
    printf("Array after insertion: ") ;
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}