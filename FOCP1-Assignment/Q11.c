#include<stdio.h>
int main()
{
    int i, score[]={34,45,67,89,62,81};
    int n;
    n = sizeof(score)/sizeof(score[0]);  // it is telling the no. of elements
    int even_array[n],odd_array[n],e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(score[i]%2==0)
          even_array[e++]=score[i];
        else
          odd_array[o++]=score[i];
    }
    printf("Even scores= ");
    if(e==0)
    printf("none");
    else
      for(i=0;i<e;i++)   
       printf("%d ",even_array[i]);
    printf("\nOdd scores= ");
    if(o==0)
    printf("none");
    else
      for(i=0;i<o;i++)
       printf("%d ",odd_array[i]);

}