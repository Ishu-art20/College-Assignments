// max & min in array
#include<stdio.h>
int main()
{
    int i, score[]={34,45,67,89,62,81};
    int n,max,min;
    n = sizeof(score)/sizeof(score[0]); 
    min=score[0]; 
    max=score[0];
    for(i=0;i<n;i++)
    {  
       if(max<score[i])
       max=score[i];
       if(min>score[i])
       min=score[i];
    }
    printf("Maximum score = %d Minimum scores are = %d",max,min);

}
